#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SimpleQTExample.h"

#include <QMainWindow>

class SimpleQTExample : public QMainWindow {
    Q_OBJECT

public:
    SimpleQTExample(QWidget* parent = nullptr);
    ~SimpleQTExample();

private slots:
    void on_button_clicked();

private:
    class Ui::MainWindow* ui;
};
