#include "registerdialog.h"
#include "ui_registerdialog.h"

RegisterDialog::RegisterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);

    ui->password_edit->setEchoMode(QLineEdit::Password);
    ui->confirm_edit->setEchoMode(QLineEdit::Password);

    ui->err_tip->setProperty("state", "normal");
    repolish(ui->err_tip);

}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

void RegisterDialog::on_get_code_btn_clicked()
{
    auto email = ui->email_edit->text();
    QRegularExpression regex(R"((^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$))");

    bool isMatch = regex.match(email).hasMatch();
    if (isMatch) {

    }
    else {
        showTip(tr("邮箱地址不合法"), false);
    }
}

void RegisterDialog::showTip(QString str, bool b_ok)
{
    if (b_ok) {
        ui->err_tip->setProperty("state", "normal");
    }
    else {
        ui->err_tip->setProperty("state", "err");
    }
    ui->err_tip->setText(str);
    repolish(ui->err_tip);
}

