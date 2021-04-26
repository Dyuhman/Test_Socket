#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QWidget>
#pragma comment(lib, "ws2_32.lib")
#include <winsock2.h>
#include <iostream>

class MyClient : public QWidget
{
    Q_OBJECT
public:
    explicit MyClient(QWidget *parent = nullptr);

signals:

};

#endif // MYCLIENT_H
