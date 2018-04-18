#ifndef DIALCIENT_H
#define DIALCIENT_H

#include <QWidget>
#include <QTimer>
#include "socketclient.h"


namespace Ui {
class DialCient;
}

class DialCient : public QWidget
{
    Q_OBJECT

public:
    explicit DialCient(QWidget *parent = 0);
    ~DialCient();  

private:
    Ui::DialCient *ui;
    QTimer *pTimer;
    SocketClient *pSocketClient;
    int timeVal;
    int dialVal;

public slots:
    void mySlot(int);
    void myTimerBtnSlot(bool);
    void myTimeOutSlot(void);
    void myComboSlot(int);
};

#endif // DIALCIENT_H
