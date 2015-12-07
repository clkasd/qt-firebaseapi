# qt-firebaseapi
Firebase API for Qt Framework

# API Usage
*Definitons & Config

To be able to use qt-firebase you need to define a Firebase object like shown:
```c++
 Firebase *firebase=new Firebase("https://firexample.firebaseio.com/");
```
*Auth

Also if your firebase uses a security you should pass firebase token.(Token generation is on the way)
```c++
 firebase->setToken("cxOMEbyj7kdt7tlHsw8lhlj2W4T5ea5lVxBzgRUE");
```

*Reading Data

Reading data is achieved with getValue() call.
```c++
 firebase->getValue();
```
*Writing Data
```c++
 firebase->child("exampledata")->setValue("test1");
```

Also :

In order to add child to another child use:
```c++
 Firebase *childFirebase=firebase->child("exampledata3");
 childFirebase->child("examplechild data")->setValue("test child1");
```

Get Events:

To get events or data feedback from your firebase child firebase you must connect eventResponseReady signal to some slot like :
```c++
 connect(firebase,SIGNAL(eventResponseReady(QString)),this,SLOT(onResponseReady(QString)));
```
For more information please examine qt example.

# TODO

-Token generator

-Stream changes to a single location(text/event-stream)



