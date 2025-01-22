#ifndef HTTPMANAGER_H
#define HTTPMANAGER_H

#include "singleton.h"
#include <QString>
#include <QUrl>
#include <QObject>
#include <QNetworkAccessManager>
#include <QJsonObject>
#include <QJsonDocument>
#include <memory>

// CRTP
class HttpManager : public QObject, public Singleton<HttpManager>, public std::enable_shared_from_this<HttpManager>
{
    Q_OBJECT

public:
    ~HttpManager();

private:
    friend class Singleton<HttpManager>;
    HttpManager();
    QNetworkAccessManager _manager;
    void PostHttpRequset(QUrl url, QJsonObject json, RequestId req_id, Modules mod);

private slots:
    void slot_http_finish(RequestId id, QString res, ErrorCodes err, Modules mod);

signals:
  void sig_http_finish(RequestId id, QString res, ErrorCodes err, Modules mod);
  void sig_register_mod_finish(RequestId id, QString res, ErrorCodes err);

};

#endif // HTTPMANAGER_H
