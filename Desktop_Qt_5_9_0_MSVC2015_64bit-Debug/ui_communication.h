/********************************************************************************
** Form generated from reading UI file 'communication.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMUNICATION_H
#define UI_COMMUNICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_communication
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout1;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QPushButton *pushBut_Refind;
    QPushButton *pushBut_ReadCalibrition;
    QPushButton *pushBut_EmptyCalibration;
    QPushButton *pushBut_FullCalibration;
    QPushButton *pushBut_StartRead;
    QPushButton *pushBut_StopRead;

    void setupUi(QWidget *communication)
    {
        if (communication->objectName().isEmpty())
            communication->setObjectName(QStringLiteral("communication"));
        communication->resize(230, 240);
        communication->setMaximumSize(QSize(240, 240));
        layoutWidget = new QWidget(communication);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 30, 151, 101));
        verticalLayout1 = new QVBoxLayout(layoutWidget);
        verticalLayout1->setSpacing(0);
        verticalLayout1->setObjectName(QStringLiteral("verticalLayout1"));
        verticalLayout1->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout1->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout1->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout1->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout1->addWidget(label_4);

        groupBox_2 = new QGroupBox(communication);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 211, 131));
        layoutWidget1 = new QWidget(communication);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(14, 152, 201, 83));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushBut_Refind = new QPushButton(layoutWidget1);
        pushBut_Refind->setObjectName(QStringLiteral("pushBut_Refind"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushBut_Refind->sizePolicy().hasHeightForWidth());
        pushBut_Refind->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushBut_Refind, 0, 0, 1, 1);

        pushBut_ReadCalibrition = new QPushButton(layoutWidget1);
        pushBut_ReadCalibrition->setObjectName(QStringLiteral("pushBut_ReadCalibrition"));
        sizePolicy.setHeightForWidth(pushBut_ReadCalibrition->sizePolicy().hasHeightForWidth());
        pushBut_ReadCalibrition->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushBut_ReadCalibrition, 0, 1, 1, 1);

        pushBut_EmptyCalibration = new QPushButton(layoutWidget1);
        pushBut_EmptyCalibration->setObjectName(QStringLiteral("pushBut_EmptyCalibration"));
        sizePolicy.setHeightForWidth(pushBut_EmptyCalibration->sizePolicy().hasHeightForWidth());
        pushBut_EmptyCalibration->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushBut_EmptyCalibration, 1, 0, 1, 1);

        pushBut_FullCalibration = new QPushButton(layoutWidget1);
        pushBut_FullCalibration->setObjectName(QStringLiteral("pushBut_FullCalibration"));
        sizePolicy.setHeightForWidth(pushBut_FullCalibration->sizePolicy().hasHeightForWidth());
        pushBut_FullCalibration->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushBut_FullCalibration, 1, 1, 1, 1);

        pushBut_StartRead = new QPushButton(layoutWidget1);
        pushBut_StartRead->setObjectName(QStringLiteral("pushBut_StartRead"));
        sizePolicy.setHeightForWidth(pushBut_StartRead->sizePolicy().hasHeightForWidth());
        pushBut_StartRead->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushBut_StartRead, 2, 0, 1, 1);

        pushBut_StopRead = new QPushButton(layoutWidget1);
        pushBut_StopRead->setObjectName(QStringLiteral("pushBut_StopRead"));
        sizePolicy.setHeightForWidth(pushBut_StopRead->sizePolicy().hasHeightForWidth());
        pushBut_StopRead->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushBut_StopRead, 2, 1, 1, 1);


        retranslateUi(communication);

        QMetaObject::connectSlotsByName(communication);
    } // setupUi

    void retranslateUi(QWidget *communication)
    {
        communication->setWindowTitle(QApplication::translate("communication", "\350\277\236\346\216\245\344\270\213\344\275\215\346\234\272", Q_NULLPTR));
        label->setText(QApplication::translate("communication", "\346\211\276\345\210\260\344\270\213\344\275\215\346\234\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("communication", "\347\251\272\347\256\241\346\225\260\346\215\256\345\267\262\346\240\207\345\256\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("communication", "\346\273\241\347\256\241\346\225\260\346\215\256\345\267\262\346\240\207\345\256\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("communication", "\346\265\213\351\207\217\344\270\255", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("communication", "\344\270\213\344\275\215\346\234\272\347\212\266\346\200\201", Q_NULLPTR));
        pushBut_Refind->setText(QApplication::translate("communication", "\345\257\273\346\211\276\344\270\213\344\275\215\346\234\272", Q_NULLPTR));
        pushBut_ReadCalibrition->setText(QApplication::translate("communication", "\350\257\273\345\217\226\346\240\207\345\256\232", Q_NULLPTR));
        pushBut_EmptyCalibration->setText(QApplication::translate("communication", "\347\251\272\347\256\241\346\240\207\345\256\232", Q_NULLPTR));
        pushBut_FullCalibration->setText(QApplication::translate("communication", "\346\273\241\347\256\241\346\240\207\345\256\232", Q_NULLPTR));
        pushBut_StartRead->setText(QApplication::translate("communication", "\345\274\200\345\247\213\346\265\213\351\207\217", Q_NULLPTR));
        pushBut_StopRead->setText(QApplication::translate("communication", "\345\201\234\346\255\242\346\265\213\351\207\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class communication: public Ui_communication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMUNICATION_H
