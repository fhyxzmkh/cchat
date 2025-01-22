#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>
#include <functional>

#include "global.h"

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterDialog(QWidget *parent = nullptr);
    ~RegisterDialog();

private slots:
    void on_get_code_btn_clicked();
    void slot_register_mod_finish(RequestId id, QString res, ErrorCodes err);

private:
    Ui::RegisterDialog *ui;
    void showTip(QString str, bool b_ok);
    void initHttpHandles();
    QMap<RequestId, std::function<void(const QJsonObject&)>> _handlers;
};

#endif // REGISTERDIALOG_H
