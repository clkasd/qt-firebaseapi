#ifndef FIREBASE_H
#define FIREBASE_H

#include <QObject>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QUrl>
#include <QUrlQuery>
#include <QDebug>
#include <QtGlobal>
class Firebase : public QObject
{
    Q_OBJECT
public:
    explicit Firebase(QObject *parent = 0);
    Firebase(QString hostName,QString child);
    Firebase(QString hostName);
    void init();
    void setValue(QString str);
    void getValue();
    void deleteValue();
    void setToken(QString);
    Firebase* child(QString childName);

signals:
    void eventResponseReady(QString);
public slots:
    void replyFinished(QNetworkReply*);
private:
    QString host;
    QString firebaseToken="";
    QNetworkAccessManager *manager;
    QString currentNode;
    QString latestNode;
    QString buildPath(int);
    QString createJson(QString);
};

#endif // FIREBASE_H
