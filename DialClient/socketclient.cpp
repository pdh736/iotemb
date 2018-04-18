#include "socketclient.h"
#define Kor(str)  QString::fromLocal8Bit(str)

SocketClient::SocketClient(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
{
//	ui.setupUi(this);

	pQTcpSocket = new QTcpSocket();
	
	connect(pQTcpSocket, SIGNAL(connected()), this, SLOT(slotConnectServer()));
	connect(pQTcpSocket, SIGNAL(disconnected()), this, SLOT(slotClosedByServer()));
	connect(pQTcpSocket, SIGNAL(readyRead()), this, SLOT(slotSocketReadData()));
	connect(pQTcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(slotSocketError()));
    slotConnectToServer();
//	connect(ui.pPBsocketConnect, SIGNAL(clicked()), this, SLOT(slotConnectToServer()));
//	connect(ui.pPBdataSend, SIGNAL(clicked()), this, SLOT(slotSocketWriteData()));
//	connect(ui.pPBrecvDataClear, SIGNAL(clicked()),ui.pTEreceiveData, SLOT(clear()));
}

SocketClient::~SocketClient()
{

}
void SocketClient::slotConnectServer()
{
//	QString Str = "connect Complete";
//	receiveDataUpdate(Str);


//	if(ui.pPBsocketConnect->isChecked())
//	{
        QString Str = "[WINQT:PASSWD]";
		QByteArray byteStr = Str.toLocal8Bit();
		pQTcpSocket->write(byteStr);
//	}
}

void SocketClient::slotClosedByServer()
{
	pQTcpSocket->close();
//	QString Str = "Closed Server!!";
//	receiveDataUpdate(Str);
//	ui.pPBsocketConnect->setChecked(false);
//    ui.pPBsocketConnect->setText(Kor("서버연결"));
}

void SocketClient::slotSocketReadData(){
    char *pToken;
    char *pArray[5]={0};
    int i;
	char *pktmessage;	
	QString Str;
	QByteArray bytearray;

	if (pQTcpSocket->bytesAvailable() > BLOCK_SIZE)
		return;
	bytearray = pQTcpSocket->read(BLOCK_SIZE);

	pktmessage = bytearray.data();
	Str.sprintf("%s",pktmessage);
//	receiveDataUpdate(Str);

    pToken = strtok(pktmessage,"[#]");
    i = 0;
    while(pToken != NULL)
    {
        pArray[i] =  pToken;
        if(i++ >= 5)
            break;
        pToken = strtok(NULL,"[#]");
    }
    if(!strncmp(pArray[1],"LEDON",5))
    {

    }
    else if(!strncmp(pArray[1],"LEDOFF",6))
    {

    }
    // QMessageBox::information(this,"test",pArray[1]);
}

void SocketClient::slotSocketError()
{
	QString Str = pQTcpSocket->errorString();
//	receiveDataUpdate(Str);

}

void SocketClient::slotConnectToServer(){
	//서버 연결 요청
//	bool ok;
//	QString HostIp = QString("192.168.0.70");

//	if(ui.pPBsocketConnect->isChecked())
//	{
//        HostIp = QInputDialog::getText(this,"HostIP","Input Server IP:",QLineEdit::Normal,"192.168.0.70",&ok);
//		if(ok)
//		{
//			pQTcpSocket->connectToHost(HostIp, 5000);
            pQTcpSocket->connectToHost("192.168.1.64", 5000);
//			pQTcpSocket->connectToHost(QHostAddress::LocalHost, 5000);
//			ui.pPBsocketConnect->setText(Kor("서버종료"));
//		}
//	}
//	else
//		pQTcpSocket->close();

}
void SocketClient::slotSocketWriteData(QString cmd)
{	
//	if(ui.pPBsocketConnect->isChecked())
//	{
//		QString Str = ui.pLEsendDataMsg->text() + '\n';
//        QString Str = "[SM7QT]Hello" + '\n';
        QByteArray byteStr = cmd.toLocal8Bit();
		char *mesg = byteStr.data();
		if(mesg[0] != '[')
		{
			QByteArray sendData = "[ALLMSG]" + byteStr;
			pQTcpSocket->write(sendData);
		}
        else
            pQTcpSocket->write(mesg);
//	}
//	else
//	{
//		QString Str = "Closed Server!!";
//		receiveDataUpdate(Str);
//	}

//	ui.pLEsendDataMsg->clear();
}

void SocketClient::receiveDataUpdate(QString &pStr)
{

	QTime time = QTime::currentTime();
	QString sTime = time.toString();

	sTime = sTime + " " + pStr; 
//	ui.pTEreceiveData->append(sTime);
//	ui.pTEreceiveData->moveCursor(QTextCursor::End);
}


