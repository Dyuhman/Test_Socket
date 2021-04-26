#ifndef CLEINTWIDJET_H
#define CLEINTWIDJET_H

#include <QMainWindow>
#pragma comment(lib, "ws2_32.lib")
#include <winsock2.h>
#include <iostream>
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui { class CleintWidjet; }
QT_END_NAMESPACE

class CleintWidjet : public QMainWindow
{
    Q_OBJECT 

public:
    CleintWidjet(QWidget *parent = 0);
    ~CleintWidjet();

private slots:
    void on_whiteButton_clicked();
    void on_yellowButton_clicked();
    void on_redButton_clicked();
    void on_connectButton_clicked();

private:
    Ui::CleintWidjet *ui;
    SOCKET Connction;

public slots:
    void ClientHandler();
};
#endif // CLEINTWIDJET_H
