#ifndef ACTIONHANDLER_H
#define ACTIONHANDLER_H
#include <QObject>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QUrl>
#include <QDebug>
#include <QString>
class ActionHandler:public QObject
{
    Q_OBJECT
public:
    ActionHandler();
public slots:
    void onResponseReady(QString);
private:
};

#endif // ACTIONHANDLER_H
