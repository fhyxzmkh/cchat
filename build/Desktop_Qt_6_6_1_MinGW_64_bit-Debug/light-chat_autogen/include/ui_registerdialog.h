/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *user_label;
    QLineEdit *user_edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *email_label;
    QLineEdit *email_edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *password_label;
    QLineEdit *password_edit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *confirm_label;
    QLineEdit *confirm_edit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *verify_label;
    QLineEdit *verify_edit;
    QPushButton *get_code_btn;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *err_tip;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *cancel_btn;
    QPushButton *submit_btn;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_2;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(300, 500);
        RegisterDialog->setMinimumSize(QSize(300, 500));
        RegisterDialog->setMaximumSize(QSize(300, 500));
        verticalLayout_2 = new QVBoxLayout(RegisterDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(RegisterDialog);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        user_label = new QLabel(page);
        user_label->setObjectName("user_label");
        user_label->setMinimumSize(QSize(50, 25));
        user_label->setMaximumSize(QSize(50, 25));
        user_label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(user_label);

        user_edit = new QLineEdit(page);
        user_edit->setObjectName("user_edit");
        user_edit->setMinimumSize(QSize(0, 25));
        user_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_edit);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        email_label = new QLabel(page);
        email_label->setObjectName("email_label");
        email_label->setMinimumSize(QSize(50, 25));
        email_label->setMaximumSize(QSize(50, 25));
        email_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(email_label);

        email_edit = new QLineEdit(page);
        email_edit->setObjectName("email_edit");
        email_edit->setMinimumSize(QSize(0, 25));
        email_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(email_edit);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        password_label = new QLabel(page);
        password_label->setObjectName("password_label");
        password_label->setMinimumSize(QSize(50, 25));
        password_label->setMaximumSize(QSize(50, 25));
        password_label->setTextFormat(Qt::PlainText);
        password_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(password_label);

        password_edit = new QLineEdit(page);
        password_edit->setObjectName("password_edit");
        password_edit->setMinimumSize(QSize(0, 25));
        password_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(password_edit);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        confirm_label = new QLabel(page);
        confirm_label->setObjectName("confirm_label");
        confirm_label->setMinimumSize(QSize(50, 25));
        confirm_label->setMaximumSize(QSize(50, 25));
        confirm_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(confirm_label);

        confirm_edit = new QLineEdit(page);
        confirm_edit->setObjectName("confirm_edit");
        confirm_edit->setMinimumSize(QSize(0, 25));
        confirm_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(confirm_edit);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verify_label = new QLabel(page);
        verify_label->setObjectName("verify_label");
        verify_label->setMinimumSize(QSize(50, 25));
        verify_label->setMaximumSize(QSize(50, 25));
        verify_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(verify_label);

        verify_edit = new QLineEdit(page);
        verify_edit->setObjectName("verify_edit");
        verify_edit->setMinimumSize(QSize(0, 25));
        verify_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(verify_edit);

        get_code_btn = new QPushButton(page);
        get_code_btn->setObjectName("get_code_btn");
        get_code_btn->setMinimumSize(QSize(0, 25));
        get_code_btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(get_code_btn);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        widget = new QWidget(page);
        widget->setObjectName("widget");
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        err_tip = new QLabel(widget);
        err_tip->setObjectName("err_tip");
        err_tip->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(err_tip);


        verticalLayout_3->addWidget(widget);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        cancel_btn = new QPushButton(page);
        cancel_btn->setObjectName("cancel_btn");
        cancel_btn->setMinimumSize(QSize(0, 25));
        cancel_btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_8->addWidget(cancel_btn);

        submit_btn = new QPushButton(page);
        submit_btn->setObjectName("submit_btn");
        submit_btn->setMinimumSize(QSize(0, 25));
        submit_btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_8->addWidget(submit_btn);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Dialog", nullptr));
        user_label->setText(QCoreApplication::translate("RegisterDialog", "\347\224\250\346\210\267", nullptr));
        email_label->setText(QCoreApplication::translate("RegisterDialog", "\351\202\256\347\256\261", nullptr));
        password_label->setText(QCoreApplication::translate("RegisterDialog", "\345\257\206\347\240\201", nullptr));
        confirm_label->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        verify_label->setText(QCoreApplication::translate("RegisterDialog", "\351\252\214\350\257\201\347\240\201", nullptr));
        get_code_btn->setText(QCoreApplication::translate("RegisterDialog", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", nullptr));
        err_tip->setText(QCoreApplication::translate("RegisterDialog", "Tips\357\274\232\344\270\200\345\210\207\346\255\243\345\270\270\357\274\201", nullptr));
        cancel_btn->setText(QCoreApplication::translate("RegisterDialog", "\345\217\226\346\266\210", nullptr));
        submit_btn->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
