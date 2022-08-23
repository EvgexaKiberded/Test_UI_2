#include "udpclient.h"
#include "./ui_udpclient.h"
#include "socket.h"
#include <QString>
#include <QThread>

UDPClient::UDPClient(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UDPClient)
{
    ui->setupUi(this);
    thread = nullptr;
    ui->pB_send_data->setEnabled(false);
}

UDPClient::~UDPClient()
{
    emit(on_pB_disconnect_clicked());
    delete ui;
}
//Отправка сообщения
void UDPClient::on_pB_send_data_clicked()
{
    emit(send_string(ui->lineEdit_message->text()));
    QString sended_message = "Вы: " + ui->lineEdit_message->text();
    ui->textEdit->append(QString("<span style='color:#ff0000;'>%1</span>").arg(sended_message));
    ui->lineEdit_message->clear();
    ui->lineEdit_message->setFocus();
}
//Подключиться
void UDPClient::on_pB_connect_clicked()
{
    emit(on_pB_disconnect_clicked());
    ui->pB_send_data->setEnabled(true);
    thread = new QThread(this);
    socket = new Socket(ui->lineEdit_loc_port->text().toInt(),ui->lineEdit_remoted_port->text().toInt());
    socket->moveToThread(thread);
    thread->start();
    connect(this, SIGNAL(send_string(QString )),socket, SLOT(send_data(QString)));
    connect(socket, SIGNAL(receiving_message(QByteArray, QHostAddress, quint16)),this, SLOT(receiving_message(QByteArray, QHostAddress, quint16)));
}
//Отключиться
void UDPClient::on_pB_disconnect_clicked()
{
    if(thread != nullptr){
        socket->deleteLater();
        thread->quit();
        thread->wait();
        delete thread;
        thread = nullptr;
        ui->pB_send_data->setEnabled(false);
    }
}
// Получение сообщения
void UDPClient::receiving_message(QByteArray message, QHostAddress ip, quint16 port )
{
    QString received_message = "Ip: " +  ip.toString() + "  Port: " + tr("%1").arg(port) + "- " + message.data();
    ui->textEdit->append(QString("<span style='color:#0000FF;'>%1</span>").arg(received_message));
}

