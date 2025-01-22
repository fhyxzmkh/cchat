#include "mainwindow.h"

#include <QApplication>
#include <QIcon>
#include <QFile>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setWindowIcon(QIcon(":/res/icon.png"));

    QFile qss(":/style/stylesheet.qss");
    if (qss.open(QFile::ReadOnly)) {
        qDebug() << "Open qss file success.";
        QString style { QLatin1String(qss.readAll()) };
        a.setStyleSheet(style);
        qss.close();
    }
    else {
        qDebug() << "Open qss file failed.";
    }

    MainWindow w;
    w.show();
    return a.exec();
}
