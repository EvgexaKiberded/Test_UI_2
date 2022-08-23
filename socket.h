#ifndef SOCKET_H
#define SOCKET_H

#include <QObject>
#include <QDebug>
#include <QUdpSocket>

class Socket: public QObject
{
    Q_OBJECT
public:
    Socket(quint16 local_Port, quint16 remoted_Port);
    ~Socket();

private slots:
    void send_data(QString message);
    void readingDatagrama();
signals:
    void receiving_message(QByteArray message, QHostAddress ip, quint16 port);

private:
    quint16 remoted_Port;
    quint16 local_Port;
    QUdpSocket* udp_socket;


};

#endif // SOCKET_H
