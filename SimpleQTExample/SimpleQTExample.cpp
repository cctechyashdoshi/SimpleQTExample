#include "SimpleQTExample.h"

SimpleQTExample::SimpleQTExample(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &SimpleQTExample::on_button_clicked);
}

SimpleQTExample::~SimpleQTExample() {
    delete ui;
}

void SimpleQTExample::on_button_clicked() {
    QString name = ui->lineEdit->text();
    QString greeting = "Hello, " + name;
    ui->label->setText(greeting);
}
