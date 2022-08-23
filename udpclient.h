#ifndef UDPCLIENT_H
#define UDPCLIENT_H

#include <QMainWindow>
#include <QUdpSocket>
#include "socket.h"

QT_BEGIN_NAMESPACE
namespace Ui { class UDPClient; }
QT_END_NAMESPACE

class UDPClient : public QMainWindow
{
    Q_OBJECT

public:
    UDPClient(QWidget *parent = nullptr);
    ~UDPClient();

private slots:
    void on_pB_send_data_clicked();
    void on_pB_connect_clicked();
    void on_pB_disconnect_clicked();
    void receiving_message(QByteArray message, QHostAddress ip, quint16 port);

signals:
    void send_string(QString message);

private:
    Ui::UDPClient *ui;
    QUdpSocket* udpSocket;
    QThread *thread;
    Socket* socket;
};
#endif // UDPCLIENT_H
