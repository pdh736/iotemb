/********************************************************************************
** Form generated from reading UI file 'dialcient.ui'
**
** Created: Wed Apr 18 12:24:51 2018
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALCIENT_H
#define UI_DIALCIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDial>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialCient
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pTimerButton;
    QPushButton *pQuitButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pLabel;
    QSpacerItem *horizontalSpacer;
    QComboBox *pComboBox;
    QHBoxLayout *horizontalLayout_3;
    QDial *pDial;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pArdLedBtn;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_4;
    QProgressBar *pProgressBar;
    QLCDNumber *pLcdNumber;

    void setupUi(QWidget *DialCient)
    {
        if (DialCient->objectName().isEmpty())
            DialCient->setObjectName(QString::fromUtf8("DialCient"));
        DialCient->resize(479, 387);
        verticalLayoutWidget = new QWidget(DialCient);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(19, 19, 441, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pTimerButton = new QPushButton(verticalLayoutWidget);
        pTimerButton->setObjectName(QString::fromUtf8("pTimerButton"));
        pTimerButton->setCheckable(true);

        horizontalLayout->addWidget(pTimerButton);

        pQuitButton = new QPushButton(verticalLayoutWidget);
        pQuitButton->setObjectName(QString::fromUtf8("pQuitButton"));

        horizontalLayout->addWidget(pQuitButton);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, -1, -1);
        pLabel = new QLabel(verticalLayoutWidget);
        pLabel->setObjectName(QString::fromUtf8("pLabel"));

        horizontalLayout_2->addWidget(pLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pComboBox = new QComboBox(verticalLayoutWidget);
        pComboBox->setObjectName(QString::fromUtf8("pComboBox"));
        pComboBox->setMaxCount(2147483644);

        horizontalLayout_2->addWidget(pComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pDial = new QDial(verticalLayoutWidget);
        pDial->setObjectName(QString::fromUtf8("pDial"));
        pDial->setMaximum(10);
        pDial->setSingleStep(1);
        pDial->setNotchesVisible(true);

        horizontalLayout_3->addWidget(pDial);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 35, -1, 35);
        pArdLedBtn = new QPushButton(verticalLayoutWidget);
        pArdLedBtn->setObjectName(QString::fromUtf8("pArdLedBtn"));
        pArdLedBtn->setCheckable(true);

        verticalLayout_2->addWidget(pArdLedBtn);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3->setStretch(0, 7);
        horizontalLayout_3->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pProgressBar = new QProgressBar(verticalLayoutWidget);
        pProgressBar->setObjectName(QString::fromUtf8("pProgressBar"));
        pProgressBar->setValue(0);

        horizontalLayout_4->addWidget(pProgressBar);

        pLcdNumber = new QLCDNumber(verticalLayoutWidget);
        pLcdNumber->setObjectName(QString::fromUtf8("pLcdNumber"));
        pLcdNumber->setDigitCount(2);
        pLcdNumber->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(pLcdNumber);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 5);
        verticalLayout->setStretch(3, 1);

        retranslateUi(DialCient);
        QObject::connect(pDial, SIGNAL(valueChanged(int)), pLcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(DialCient);
    } // setupUi

    void retranslateUi(QWidget *DialCient)
    {
        DialCient->setWindowTitle(QApplication::translate("DialCient", "DialCient", 0, QApplication::UnicodeUTF8));
        pTimerButton->setText(QApplication::translate("DialCient", "Timer Start", 0, QApplication::UnicodeUTF8));
        pQuitButton->setText(QApplication::translate("DialCient", "Quit", 0, QApplication::UnicodeUTF8));
        pLabel->setText(QApplication::translate("DialCient", "TextLabel", 0, QApplication::UnicodeUTF8));
        pComboBox->clear();
        pComboBox->insertItems(0, QStringList()
         << QApplication::translate("DialCient", "100ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialCient", "200ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialCient", "300ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialCient", "400ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialCient", "500ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialCient", "600ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialCient", "700ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialCient", "800ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialCient", "900ms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialCient", "1000ms", 0, QApplication::UnicodeUTF8)
        );
        pArdLedBtn->setText(QApplication::translate("DialCient", "ARD_LEDON", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DialCient", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialCient: public Ui_DialCient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALCIENT_H
