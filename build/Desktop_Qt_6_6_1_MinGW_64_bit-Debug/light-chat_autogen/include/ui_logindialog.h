/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *user_label;
    QLineEdit *user_edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *password_label;
    QLineEdit *password_edit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *forget_label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *register_btn;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *login_btn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(300, 500);
        LoginDialog->setMaximumSize(QSize(300, 500));
        verticalLayout_2 = new QVBoxLayout(LoginDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        widget = new QWidget(LoginDialog);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(200, 200));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/ice.jpg")));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        user_label = new QLabel(LoginDialog);
        user_label->setObjectName("user_label");
        user_label->setMinimumSize(QSize(0, 25));
        user_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_label);

        user_edit = new QLineEdit(LoginDialog);
        user_edit->setObjectName("user_edit");
        user_edit->setMinimumSize(QSize(0, 25));
        user_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_edit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        password_label = new QLabel(LoginDialog);
        password_label->setObjectName("password_label");
        password_label->setMinimumSize(QSize(0, 25));
        password_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(password_label);

        password_edit = new QLineEdit(LoginDialog);
        password_edit->setObjectName("password_edit");
        password_edit->setMinimumSize(QSize(0, 25));
        password_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(password_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        forget_label = new QLabel(LoginDialog);
        forget_label->setObjectName("forget_label");

        horizontalLayout_3->addWidget(forget_label);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        register_btn = new QPushButton(LoginDialog);
        register_btn->setObjectName("register_btn");
        register_btn->setMinimumSize(QSize(150, 0));
        register_btn->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_5->addWidget(register_btn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        login_btn = new QPushButton(LoginDialog);
        login_btn->setObjectName("login_btn");
        login_btn->setMinimumSize(QSize(150, 0));
        login_btn->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_4->addWidget(login_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        label->setText(QString());
        user_label->setText(QCoreApplication::translate("LoginDialog", "\347\224\250\346\210\267", nullptr));
        password_label->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201", nullptr));
        forget_label->setText(QCoreApplication::translate("LoginDialog", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        register_btn->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
        login_btn->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
