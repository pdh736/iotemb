#ifndef SOCKETCLIENT_H
#define SOCKETCLIENT_H

#include <QtGui/QWidget>
#include <QTcpSocket>
#include <QHostAddress>
#include <QInputDialog>
#include <QDateTime>
#include <QMessageBox>
//#include "ui_socketclient.h"

#define BLOCK_SIZE      1024

class SocketClient : public QWidget
{
	Q_OBJECT

public:
	SocketClient(QWidget *parent = 0, Qt::WFlags flags = 0);
	~SocketClient();
	void receiveDataUpdate(QString &);
private:
//	Ui::SocketClientClass ui;

	QTcpSocket *pQTcpSocket;   

private slots:
	void slotConnectToServer();
	void slotClosedByServer();
	void slotSocketReadData();
	void slotSocketError();

	void slotConnectServer();
    void slotSocketWriteData(QString);
};

#endif // SOCKETCLIENT_H
