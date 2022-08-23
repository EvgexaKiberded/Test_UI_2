/********************************************************************************
** Form generated from reading UI file 'udpclient.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPCLIENT_H
#define UI_UDPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UDPClient
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_top_panel;
    QVBoxLayout *verticalLayout_labels;
    QLabel *label_loc_port;
    QLabel *label_remoted_port;
    QVBoxLayout *verticalLayout_lineEdits;
    QLineEdit *lineEdit_loc_port;
    QLineEdit *lineEdit_remoted_port;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_buttons;
    QPushButton *pB_connect;
    QPushButton *pB_disconnect;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_bot_panel;
    QLineEdit *lineEdit_message;
    QPushButton *pB_send_data;
    QMenuBar *menubar;

    void setupUi(QMainWindow *UDPClient)
    {
        if (UDPClient->objectName().isEmpty())
            UDPClient->setObjectName(QString::fromUtf8("UDPClient"));
        UDPClient->resize(800, 600);
        centralwidget = new QWidget(UDPClient);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_top_panel = new QHBoxLayout();
        horizontalLayout_top_panel->setObjectName(QString::fromUtf8("horizontalLayout_top_panel"));
        verticalLayout_labels = new QVBoxLayout();
        verticalLayout_labels->setObjectName(QString::fromUtf8("verticalLayout_labels"));
        label_loc_port = new QLabel(centralwidget);
        label_loc_port->setObjectName(QString::fromUtf8("label_loc_port"));

        verticalLayout_labels->addWidget(label_loc_port);

        label_remoted_port = new QLabel(centralwidget);
        label_remoted_port->setObjectName(QString::fromUtf8("label_remoted_port"));

        verticalLayout_labels->addWidget(label_remoted_port);


        horizontalLayout_top_panel->addLayout(verticalLayout_labels);

        verticalLayout_lineEdits = new QVBoxLayout();
        verticalLayout_lineEdits->setObjectName(QString::fromUtf8("verticalLayout_lineEdits"));
        lineEdit_loc_port = new QLineEdit(centralwidget);
        lineEdit_loc_port->setObjectName(QString::fromUtf8("lineEdit_loc_port"));

        verticalLayout_lineEdits->addWidget(lineEdit_loc_port);

        lineEdit_remoted_port = new QLineEdit(centralwidget);
        lineEdit_remoted_port->setObjectName(QString::fromUtf8("lineEdit_remoted_port"));

        verticalLayout_lineEdits->addWidget(lineEdit_remoted_port);


        horizontalLayout_top_panel->addLayout(verticalLayout_lineEdits);

        horizontalSpacer = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_top_panel->addItem(horizontalSpacer);

        verticalLayout_buttons = new QVBoxLayout();
        verticalLayout_buttons->setObjectName(QString::fromUtf8("verticalLayout_buttons"));
        pB_connect = new QPushButton(centralwidget);
        pB_connect->setObjectName(QString::fromUtf8("pB_connect"));

        verticalLayout_buttons->addWidget(pB_connect);

        pB_disconnect = new QPushButton(centralwidget);
        pB_disconnect->setObjectName(QString::fromUtf8("pB_disconnect"));

        verticalLayout_buttons->addWidget(pB_disconnect);


        horizontalLayout_top_panel->addLayout(verticalLayout_buttons);

        horizontalLayout_top_panel->setStretch(0, 1);
        horizontalLayout_top_panel->setStretch(2, 3);
        horizontalLayout_top_panel->setStretch(3, 2);

        verticalLayout_4->addLayout(horizontalLayout_top_panel);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_4->addWidget(textEdit);

        horizontalLayout_bot_panel = new QHBoxLayout();
        horizontalLayout_bot_panel->setObjectName(QString::fromUtf8("horizontalLayout_bot_panel"));
        lineEdit_message = new QLineEdit(centralwidget);
        lineEdit_message->setObjectName(QString::fromUtf8("lineEdit_message"));

        horizontalLayout_bot_panel->addWidget(lineEdit_message);

        pB_send_data = new QPushButton(centralwidget);
        pB_send_data->setObjectName(QString::fromUtf8("pB_send_data"));

        horizontalLayout_bot_panel->addWidget(pB_send_data);


        verticalLayout_4->addLayout(horizontalLayout_bot_panel);

        UDPClient->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UDPClient);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        UDPClient->setMenuBar(menubar);

        retranslateUi(UDPClient);

        QMetaObject::connectSlotsByName(UDPClient);
    } // setupUi

    void retranslateUi(QMainWindow *UDPClient)
    {
        UDPClient->setWindowTitle(QCoreApplication::translate("UDPClient", "UDPClient", nullptr));
        label_loc_port->setText(QCoreApplication::translate("UDPClient", "\320\273\320\276\320\272\320\260\320\273\321\214\320\275\321\213\320\271 \320\277\320\276\321\200\321\202", nullptr));
        label_remoted_port->setText(QCoreApplication::translate("UDPClient", "\321\203\320\264\320\260\320\273\320\265\320\275\320\275\321\213\320\271 \320\277\320\276\321\200\321\202", nullptr));
        lineEdit_loc_port->setText(QCoreApplication::translate("UDPClient", "2424", nullptr));
        lineEdit_remoted_port->setText(QCoreApplication::translate("UDPClient", "2525", nullptr));
        pB_connect->setText(QCoreApplication::translate("UDPClient", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        pB_disconnect->setText(QCoreApplication::translate("UDPClient", "\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        pB_send_data->setText(QCoreApplication::translate("UDPClient", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UDPClient: public Ui_UDPClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPCLIENT_H
