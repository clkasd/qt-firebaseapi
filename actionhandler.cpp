#include "actionhandler.h"
#include <QUrl>
#include <firebase.h>
ActionHandler::ActionHandler()
{
    Firebase *firebase=new Firebase("https://firexample.firebaseio.com/");
    firebase->setToken("cxOMEbyj7kdt7tlHsw8lhlj2W4T5ea5lVxBzgRUE");
    firebase->child("exampledata")->setValue("test1");
    firebase->child("exampledata2")->setValue("test2");
    Firebase *childFirebase=firebase->child("exampledata3");
    childFirebase->child("examplechild data")->setValue("test child1");
    //connect(childFirebase,SIGNAL(eventResponseReady(QString)),this,SLOT(onResponseReady(QString)));
    connect(firebase,SIGNAL(eventResponseReady(QString)),this,SLOT(onResponseReady(QString)));
}
void ActionHandler::onResponseReady(QString data)
{
    qDebug()<<data;
}
