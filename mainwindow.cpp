#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _login_dialog = new LoginDialog(this);
    setCentralWidget(_login_dialog);

    connect(_login_dialog, &LoginDialog::switchRegister, this, &MainWindow::SlotSwitchRegister);
    _register_dialog = new RegisterDialog(this);

    _login_dialog->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);
    _register_dialog->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);
    _register_dialog->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SlotSwitchRegister()
{
    setCentralWidget(_register_dialog);
    _login_dialog->hide();
    _register_dialog->show();
}
