#include "socket.h"
#include <QMessageBox>

Socket::Socket(quint16 local_Port, quint16 remoted_Port): local_Port(local_Port),remoted_Port(remoted_Port)
{
    qDebug() << "Конструктор класса Socket";
    udp_socket = new QUdpSocket(this);
    udp_socket->bind(QHostAddress::LocalHost, local_Port);
    connect(udp_socket, SIGNAL(readyRead()), SLOT(readingDatagrama()));
    connect(udp_socket, SIGNAL(readyRead()),this, SLOT(readingDatagrama()));
}

Socket::~Socket(){
    qDebug() << "Деструктор класса Socket";
}

void Socket::send_data(QString message)
{
    if(udp_socket->writeDatagram(message.toUtf8(), QHostAddress::LocalHost,
                              remoted_Port) == -1){
        QMessageBox::critical(0,"Уведомление об ошибке.","Ошибка отправки данных!");
    }
}

void Socket::readingDatagrama()
{
    QHostAddress sender;
    while(udp_socket->hasPendingDatagrams()){
        QByteArray data;
        data.resize((udp_socket->pendingDatagramSize()));
        udp_socket->readDatagram(data.data(), data.size(), &sender);
        qDebug() << sender.toString() + "Port: " + QString("%1").arg(remoted_Port) +  " :  " +  data.data();
        emit(receiving_message(data,sender, remoted_Port));
    }
}


