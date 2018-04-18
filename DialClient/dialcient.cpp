#include "dialcient.h"
#include "ui_dialcient.h"

DialCient::DialCient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DialCient)
{
    timeVal=100;
    dialVal=0;
    ui->setupUi(this);
    ui->pLabel->setText("value : 0");
    pTimer =new QTimer(this);
    pSocketClient = new SocketClient(this);
    connect(ui->pDial,SIGNAL(valueChanged(int)),this,SLOT(mySlot(int)));
    connect(ui->pTimerButton,SIGNAL(clicked(bool)),this,SLOT(myTimerBtnSlot(bool)));
    connect(ui->pComboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(myComboSlot(int)));
    connect(pTimer,SIGNAL(timeout()),this,SLOT(myTimeOutSlot()));
    connect(ui->pArdLedBtn,SIGNAL(clicked(bool)),this,SLOT(myArdLedSlot(bool)));
    connect(this,SIGNAL(ArdLedSig(QString)),pSocketClient,SLOT(slotSocketWriteData(QString)));
}

DialCient::~DialCient()
{
    delete ui;
}

void DialCient::mySlot(int val){
    QString str;
    str.sprintf("value : %d",val);
    ui->pProgressBar->setValue(val);
    ui->pLabel->setText(str);
}

void DialCient::myTimerBtnSlot(bool btn){
    if(btn){
        ui->pTimerButton->setText("timer Stop");
        pTimer->start(timeVal);
    }
    else{
        ui->pTimerButton->setText("timer Start");
        pTimer->stop();
    }
}

void DialCient::myTimeOutSlot(){
   dialVal++;
   if(dialVal>127) dialVal=0;
   ui->pDial->setValue(dialVal);

}

void DialCient::myComboSlot(int comboval){
    timeVal=(comboval+1)*100;
    if(pTimer->isActive()) {
        pTimer->stop();
        pTimer->start(timeVal);
    }
}


void DialCient::myArdLedSlot(bool btn){
    if(btn){
       emit ArdLedSig("[pdh]LEDON\n");
        ui->pArdLedBtn->setText("ARD LED OFF");
    }
    else {
       emit ArdLedSig("[pdh]LEDOFF\n");
        ui->pArdLedBtn->setText("ARD LED ON");
    }
}

