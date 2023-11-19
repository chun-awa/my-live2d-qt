//
// Created by lsk on 10/25/22.
//

#include "configDialog.h"

#include <utility>

ConfigDialog::ConfigDialog(configuration currentConfiguration, bool firstRun, QWidget *parent) : QDialog(parent) {
    this->ui = new Ui::Dialog();
    this->ui->setupUi(this);
    if (!firstRun) {
        this->currentConfiguration = currentConfiguration;
        this->ui->mouseSensibility->setValue(currentConfiguration.getMouseSensibility() * 10);
        this->reloadMouseSensibilityValue();
        vector<string> models = this->listModels();
        for (const string& model : models) {
            this->ui->comboBox->addItem(STQ(model));
        }
        this->ui->comboBox->setCurrentText(this->currentConfiguration.getModelName());
        this->ui->label_3->setText(this->currentConfiguration.getResourceDir());
        this->ui->widgetHeight->setValue(this->currentConfiguration.getWidgetSize().height());
        this->ui->widgetWidth->setValue(this->currentConfiguration.getWidgetSize().width());
        for (QAbstractButton *btn : this->ui->buttonGroup->buttons()) {
            if (btn->text() == "Left" && this->currentConfiguration.isWidgetOnLeft() ||
                btn->text() == "Right" && ! this->currentConfiguration.isWidgetOnLeft()
                    ) {
                btn->setChecked(true);
            }
        }
    } else {
        this->currentConfiguration = configuration();
    }
    connect(this->ui->pushButton_2, &QPushButton::clicked, this, [this](bool clicked) {
        int height = this->ui->widgetHeight->value();
        int width = this->ui->widgetWidth->value();
        this->currentConfiguration.setWidgetSize(QSize(height, width));
        emit okPressed(this->currentConfiguration);
        this->currentConfiguration.save();
        this->hide();
    });
    connect(this->ui->comboBox, &QComboBox::currentTextChanged, this, [this](QString model) {
        this->currentConfiguration.setModelName(model);
    });
    connect(this->ui->pushButton_3, &QPushButton::clicked, this, [this]() {
        this->hide();
    });
    connect(this->ui->pushButton, &QPushButton::clicked, this, [this]() {
        QString selectedDir = QFileDialog::getExistingDirectory(this, "Choose resource directory", this->currentConfiguration.getResourceDir());
        if (selectedDir.isEmpty()) {
            return;
        }
        // complete the missing slash if selectDir is not endsWith slash
        // otherwise, a SEGV will be thrown when the widget loads the model
        selectedDir = !selectedDir.endsWith("/") ? selectedDir.append("/") : selectedDir;
        this->currentConfiguration.setResourceDir(selectedDir);
        this->ui->label_3->setText(this->currentConfiguration.getResourceDir());
        vector<string> models = this->listModels();
        for (const string& model : models) {
            this->ui->comboBox->addItem(QString::fromStdString(model));
        }
    });
    connect(this->ui->buttonGroup, &QButtonGroup::idToggled, this, [this](int btnId, bool stat) {
        QAbstractButton *toggledButton = this->ui->buttonGroup->button(btnId);
        this->currentConfiguration.setWidgetOnLeft(toggledButton->text() == "Left");
    });
    connect(this->ui->mouseSensibility, &QSlider::valueChanged, this, [this](int num) {
        this->currentConfiguration.setMouseSensibility(num / 10.0);
        this->reloadMouseSensibilityValue();
    });
    resize(670, 319);
    setWindowModality(Qt::WindowModality::ApplicationModal);
    setAttribute(Qt::WA_DeleteOnClose, false);
}

vector<string> ConfigDialog::listModels() {
    vector<string> result;
    for (const auto & entry : std::filesystem::directory_iterator(this->currentConfiguration.getResourceDir().toStdString())) {
        if (entry.is_directory()) {
            result.push_back(entry.path().filename());
        }
    }
    return result;
}

ConfigDialog::~ConfigDialog() noexcept {
    delete ui;
    ui = nullptr;
    this->currentConfiguration.save();
}

void ConfigDialog::reloadMouseSensibilityValue() {
    double sensibility = this->currentConfiguration.getMouseSensibility();
    this->ui->mouseSensibilityValue->setText(QString::fromStdString(to_string(sensibility)));
}

configuration ConfigDialog::getConfiguration() {
    QEventLoop eventLoop;
    connect(this->ui->pushButton_2, &QPushButton::clicked, &eventLoop, &QEventLoop::quit);
    this->show();
    eventLoop.exec();
    return this->currentConfiguration;
}
