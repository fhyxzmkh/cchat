#include "httpmanager.h"
#include "global.h"
#include <qnetworkaccessmanager.h>
#include <qnetworkrequest.h>

HttpManager::HttpManager() {
    connect(this, &HttpManager::sig_http_finish, this, &HttpManager::slot_http_finish);
}

HttpManager::~HttpManager()
{

}

void HttpManager::PostHttpRequset(QUrl url, QJsonObject json, RequestId req_id, Modules mod)
{
    QByteArray data = QJsonDocument(json).toJson();
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setHeader(QNetworkRequest::ContentLengthHeader, QByteArray::number(data.length()));
    auto self = shared_from_this();
    QNetworkReply * reply = _manager.post(request, data);

    QObject::connect(reply, &QNetworkReply::finished, [self, reply, req_id, mod](){

        if (reply->error() != QNetworkReply::NoError) { // 处理错误情况
            qDebug() << reply->errorString();
            // 发送信号通知完成
            emit self->sig_http_finish(req_id, "", ErrorCodes::ERR_NETWORK, mod);
            reply->deleteLater();
            return;
        }

        // 无错误
        QString res = reply->readAll();
        emit self->sig_http_finish(req_id, res, ErrorCodes::SUCCESS, mod);
        reply->deleteLater();
        return;

    });

}

void HttpManager::slot_http_finish(RequestId id, QString res, ErrorCodes err, Modules mod)
{
    if (mod == Modules::REGISTERMOD) {

    }
}
