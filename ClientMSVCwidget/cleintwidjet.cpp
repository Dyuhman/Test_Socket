#include "cleintwidjet.h"
#include "./ui_cleintwidjet.h"
#pragma comment(lib, "ws2_32.lib")
#include <winsock2.h>
#include <iostream>

//SOCKADDR_IN addr;
//int sizeofaddr = sizeof(addr);



CleintWidjet::CleintWidjet(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CleintWidjet)
{
    ui->setupUi(this);
    ui->centralwidget->setStyleSheet(".QWidget {background-color: green}");
    ui->whiteButton->setStyleSheet(".QPushButton[objectName = \"whiteButton\"] {background-color: white}");
    ui->yellowButton->setStyleSheet(".QPushButton[objectName = \"yellowButton\"] {background-color: yellow}");
    ui->redButton->setStyleSheet(".QPushButton[objectName = \"redButton\"] {background-color: red}");
    //WSAData wsaData;
    //WORD DLLersion = MAKEWORD(2, 1);
    //if (WSAStartup(DLLersion, &wsaData) != 0)
    //{
    //   std::cout << "Error" << std::endl;
    //   exit(1);
    //}
    //addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    //addr.sin_port = htons(1111);
    //addr.sin_family = AF_INET;
}

//SOCKET Connection = socket(AF_INET, SOCK_STREAM, NULL);



void CleintWidjet::ClientHandler()
{
    char msg[256];
    while (true)
    {
        //recv(Connection, msg, sizeof(msg), NULL);
        switch (msg[0])
        {
            case 'y':
                ui->centralwidget->setStyleSheet(".QWidget {background-color: yellow}");
                break;
            case 'r':
                ui->centralwidget->setStyleSheet(".QWidget {background-color: red}");
                break;
            case 'w':
                ui->centralwidget->setStyleSheet(".QWidget {background-color: white}");
                break;
            case 'g':
                ui->centralwidget->setStyleSheet(".QWidget {background-color: green}");
                break;
            case 'b':
                ui->centralwidget->setStyleSheet(".QWidget {background-color: blue}");
                break;
            default:
                break;
        }

    }
}

CleintWidjet::~CleintWidjet()
{
    delete ui;
}

char msg[256];

void CleintWidjet::on_whiteButton_clicked()
{
    ui->centralwidget->setStyleSheet(".QWidget {background-color: white}");
    //send(Connection, "white", sizeof(msg), NULL);
}

void CleintWidjet::on_yellowButton_clicked()
{
    ui->centralwidget->setStyleSheet(".QWidget {background-color: yellow}");
    //send(Connection, "yellow", sizeof(msg), NULL);
}

void CleintWidjet::on_redButton_clicked()
{
    ui->centralwidget->setStyleSheet(".QWidget {background-color: red}");
    //send(Connection, "red", sizeof(msg), NULL);
}

void CleintWidjet::on_connectButton_clicked()
{
//    Connection = socket(AF_INET, SOCK_STREAM, NULL);
//    if (::connect(Connection, (SOCKADDR*)&addr, sizeof(addr)) != 0)
//    {
//        ui->connectButton->setStyleSheet(".QPushButton[objectName = \"connectButton\"] {background-color: red; color: white}");
//        ui->connectButton->setText("Connect ERROR");
//        return;
//    }
//    ui->connectButton->setStyleSheet(".QPushButton[objectName = \"connectButton\"] {background-color: green; color: black}");
//    ui->connectButton->setText("Connected!");
//    ui->connectButton->setEnabled(false);

//    CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)ClientHandler, NULL, NULL, NULL);
}
