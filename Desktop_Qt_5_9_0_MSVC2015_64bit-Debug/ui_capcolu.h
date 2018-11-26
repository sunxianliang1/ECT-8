/********************************************************************************
** Form generated from reading UI file 'capcolu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPCOLU_H
#define UI_CAPCOLU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_capcolu
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *cdataview;
    QHBoxLayout *horizontalLayout_33;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit13;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit17;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit21;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit25;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit10;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLineEdit *lineEdit14;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLineEdit *lineEdit18;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QLineEdit *lineEdit22;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QLineEdit *lineEdit26;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_17;
    QLineEdit *lineEdit3;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_18;
    QLineEdit *lineEdit7;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_19;
    QLineEdit *lineEdit11;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_20;
    QLineEdit *lineEdit15;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_21;
    QLineEdit *lineEdit19;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_22;
    QLineEdit *lineEdit23;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_23;
    QLineEdit *lineEdit27;
    QHBoxLayout *horizontalLayout_24;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_25;
    QLineEdit *lineEdit4;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_26;
    QLineEdit *lineEdit8;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_27;
    QLineEdit *lineEdit12;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_28;
    QLineEdit *lineEdit16;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_29;
    QLineEdit *lineEdit20;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_30;
    QLineEdit *lineEdit24;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_31;
    QLineEdit *lineEdit28;
    QHBoxLayout *horizontalLayout_32;

    void setupUi(QWidget *capcolu)
    {
        if (capcolu->objectName().isEmpty())
            capcolu->setObjectName(QStringLiteral("capcolu"));
        capcolu->setWindowModality(Qt::ApplicationModal);
        capcolu->setEnabled(true);
        capcolu->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(capcolu->sizePolicy().hasHeightForWidth());
        capcolu->setSizePolicy(sizePolicy);
        capcolu->setMinimumSize(QSize(400, 300));
        gridLayout = new QGridLayout(capcolu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cdataview = new QCustomPlot(capcolu);
        cdataview->setObjectName(QStringLiteral("cdataview"));

        gridLayout->addWidget(cdataview, 0, 0, 1, 1);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(capcolu);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEdit1 = new QLineEdit(capcolu);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));

        horizontalLayout_6->addWidget(lineEdit1);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(capcolu);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit5 = new QLineEdit(capcolu);
        lineEdit5->setObjectName(QStringLiteral("lineEdit5"));

        horizontalLayout_5->addWidget(lineEdit5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(capcolu);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit9 = new QLineEdit(capcolu);
        lineEdit9->setObjectName(QStringLiteral("lineEdit9"));

        horizontalLayout->addWidget(lineEdit9);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(capcolu);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit13 = new QLineEdit(capcolu);
        lineEdit13->setObjectName(QStringLiteral("lineEdit13"));

        horizontalLayout_2->addWidget(lineEdit13);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(capcolu);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit17 = new QLineEdit(capcolu);
        lineEdit17->setObjectName(QStringLiteral("lineEdit17"));

        horizontalLayout_4->addWidget(lineEdit17);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(capcolu);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit21 = new QLineEdit(capcolu);
        lineEdit21->setObjectName(QStringLiteral("lineEdit21"));

        horizontalLayout_3->addWidget(lineEdit21);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(capcolu);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        lineEdit25 = new QLineEdit(capcolu);
        lineEdit25->setObjectName(QStringLiteral("lineEdit25"));

        horizontalLayout_8->addWidget(lineEdit25);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));

        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_33->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_9 = new QLabel(capcolu);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_9->addWidget(label_9);

        lineEdit2 = new QLineEdit(capcolu);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));

        horizontalLayout_9->addWidget(lineEdit2);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_10 = new QLabel(capcolu);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_10->addWidget(label_10);

        lineEdit6 = new QLineEdit(capcolu);
        lineEdit6->setObjectName(QStringLiteral("lineEdit6"));

        horizontalLayout_10->addWidget(lineEdit6);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_11 = new QLabel(capcolu);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_11->addWidget(label_11);

        lineEdit10 = new QLineEdit(capcolu);
        lineEdit10->setObjectName(QStringLiteral("lineEdit10"));

        horizontalLayout_11->addWidget(lineEdit10);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_12 = new QLabel(capcolu);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_12->addWidget(label_12);

        lineEdit14 = new QLineEdit(capcolu);
        lineEdit14->setObjectName(QStringLiteral("lineEdit14"));

        horizontalLayout_12->addWidget(lineEdit14);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_13 = new QLabel(capcolu);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_13->addWidget(label_13);

        lineEdit18 = new QLineEdit(capcolu);
        lineEdit18->setObjectName(QStringLiteral("lineEdit18"));

        horizontalLayout_13->addWidget(lineEdit18);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_14 = new QLabel(capcolu);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_14->addWidget(label_14);

        lineEdit22 = new QLineEdit(capcolu);
        lineEdit22->setObjectName(QStringLiteral("lineEdit22"));

        horizontalLayout_14->addWidget(lineEdit22);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_15 = new QLabel(capcolu);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_15->addWidget(label_15);

        lineEdit26 = new QLineEdit(capcolu);
        lineEdit26->setObjectName(QStringLiteral("lineEdit26"));

        horizontalLayout_15->addWidget(lineEdit26);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));

        verticalLayout_2->addLayout(horizontalLayout_16);


        horizontalLayout_33->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(0);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_17 = new QLabel(capcolu);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_17->addWidget(label_17);

        lineEdit3 = new QLineEdit(capcolu);
        lineEdit3->setObjectName(QStringLiteral("lineEdit3"));

        horizontalLayout_17->addWidget(lineEdit3);


        verticalLayout_3->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(0);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_18 = new QLabel(capcolu);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_18->addWidget(label_18);

        lineEdit7 = new QLineEdit(capcolu);
        lineEdit7->setObjectName(QStringLiteral("lineEdit7"));

        horizontalLayout_18->addWidget(lineEdit7);


        verticalLayout_3->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(0);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_19 = new QLabel(capcolu);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_19->addWidget(label_19);

        lineEdit11 = new QLineEdit(capcolu);
        lineEdit11->setObjectName(QStringLiteral("lineEdit11"));

        horizontalLayout_19->addWidget(lineEdit11);


        verticalLayout_3->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(0);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_20 = new QLabel(capcolu);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_20->addWidget(label_20);

        lineEdit15 = new QLineEdit(capcolu);
        lineEdit15->setObjectName(QStringLiteral("lineEdit15"));

        horizontalLayout_20->addWidget(lineEdit15);


        verticalLayout_3->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(0);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_21 = new QLabel(capcolu);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_21->addWidget(label_21);

        lineEdit19 = new QLineEdit(capcolu);
        lineEdit19->setObjectName(QStringLiteral("lineEdit19"));

        horizontalLayout_21->addWidget(lineEdit19);


        verticalLayout_3->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(0);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_22 = new QLabel(capcolu);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_22->addWidget(label_22);

        lineEdit23 = new QLineEdit(capcolu);
        lineEdit23->setObjectName(QStringLiteral("lineEdit23"));

        horizontalLayout_22->addWidget(lineEdit23);


        verticalLayout_3->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(0);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_23 = new QLabel(capcolu);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_23->addWidget(label_23);

        lineEdit27 = new QLineEdit(capcolu);
        lineEdit27->setObjectName(QStringLiteral("lineEdit27"));

        horizontalLayout_23->addWidget(lineEdit27);


        verticalLayout_3->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(0);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));

        verticalLayout_3->addLayout(horizontalLayout_24);


        horizontalLayout_33->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(0);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        label_25 = new QLabel(capcolu);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_25->addWidget(label_25);

        lineEdit4 = new QLineEdit(capcolu);
        lineEdit4->setObjectName(QStringLiteral("lineEdit4"));

        horizontalLayout_25->addWidget(lineEdit4);


        verticalLayout_4->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(0);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        label_26 = new QLabel(capcolu);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_26->addWidget(label_26);

        lineEdit8 = new QLineEdit(capcolu);
        lineEdit8->setObjectName(QStringLiteral("lineEdit8"));

        horizontalLayout_26->addWidget(lineEdit8);


        verticalLayout_4->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(0);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        label_27 = new QLabel(capcolu);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_27->addWidget(label_27);

        lineEdit12 = new QLineEdit(capcolu);
        lineEdit12->setObjectName(QStringLiteral("lineEdit12"));

        horizontalLayout_27->addWidget(lineEdit12);


        verticalLayout_4->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(0);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        label_28 = new QLabel(capcolu);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_28->addWidget(label_28);

        lineEdit16 = new QLineEdit(capcolu);
        lineEdit16->setObjectName(QStringLiteral("lineEdit16"));

        horizontalLayout_28->addWidget(lineEdit16);


        verticalLayout_4->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(0);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        label_29 = new QLabel(capcolu);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_29->addWidget(label_29);

        lineEdit20 = new QLineEdit(capcolu);
        lineEdit20->setObjectName(QStringLiteral("lineEdit20"));

        horizontalLayout_29->addWidget(lineEdit20);


        verticalLayout_4->addLayout(horizontalLayout_29);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(0);
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        label_30 = new QLabel(capcolu);
        label_30->setObjectName(QStringLiteral("label_30"));

        horizontalLayout_30->addWidget(label_30);

        lineEdit24 = new QLineEdit(capcolu);
        lineEdit24->setObjectName(QStringLiteral("lineEdit24"));

        horizontalLayout_30->addWidget(lineEdit24);


        verticalLayout_4->addLayout(horizontalLayout_30);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(0);
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        label_31 = new QLabel(capcolu);
        label_31->setObjectName(QStringLiteral("label_31"));

        horizontalLayout_31->addWidget(label_31);

        lineEdit28 = new QLineEdit(capcolu);
        lineEdit28->setObjectName(QStringLiteral("lineEdit28"));

        horizontalLayout_31->addWidget(lineEdit28);


        verticalLayout_4->addLayout(horizontalLayout_31);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(0);
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));

        verticalLayout_4->addLayout(horizontalLayout_32);


        horizontalLayout_33->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_33, 1, 0, 1, 1);


        retranslateUi(capcolu);

        QMetaObject::connectSlotsByName(capcolu);
    } // setupUi

    void retranslateUi(QWidget *capcolu)
    {
        capcolu->setWindowTitle(QApplication::translate("capcolu", "\347\224\265\345\256\271\346\225\260\346\215\256\346\237\261\347\212\266\345\233\276", Q_NULLPTR));
        label_6->setText(QApplication::translate("capcolu", "1-2\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("capcolu", "1-6\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("capcolu", "2-4\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("capcolu", "2-8\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("capcolu", "3-7\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("capcolu", "4-7\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("capcolu", "5-8\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("capcolu", "1-3\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("capcolu", "1-7\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("capcolu", "2-5\357\274\232", Q_NULLPTR));
        label_12->setText(QApplication::translate("capcolu", "3-4\357\274\232", Q_NULLPTR));
        label_13->setText(QApplication::translate("capcolu", "3-8\357\274\232", Q_NULLPTR));
        label_14->setText(QApplication::translate("capcolu", "4-8\357\274\232", Q_NULLPTR));
        label_15->setText(QApplication::translate("capcolu", "6-7\357\274\232", Q_NULLPTR));
        label_17->setText(QApplication::translate("capcolu", "1-4\357\274\232", Q_NULLPTR));
        label_18->setText(QApplication::translate("capcolu", "1-8\357\274\232", Q_NULLPTR));
        label_19->setText(QApplication::translate("capcolu", "2-6\357\274\232", Q_NULLPTR));
        label_20->setText(QApplication::translate("capcolu", "3-5\357\274\232", Q_NULLPTR));
        label_21->setText(QApplication::translate("capcolu", "4-5\357\274\232", Q_NULLPTR));
        label_22->setText(QApplication::translate("capcolu", "5-6\357\274\232", Q_NULLPTR));
        label_23->setText(QApplication::translate("capcolu", "6-8\357\274\232", Q_NULLPTR));
        label_25->setText(QApplication::translate("capcolu", "1-5\357\274\232", Q_NULLPTR));
        label_26->setText(QApplication::translate("capcolu", "2-3\357\274\232", Q_NULLPTR));
        label_27->setText(QApplication::translate("capcolu", "2-7\357\274\232", Q_NULLPTR));
        label_28->setText(QApplication::translate("capcolu", "3-6\357\274\232", Q_NULLPTR));
        label_29->setText(QApplication::translate("capcolu", "4-6\357\274\232", Q_NULLPTR));
        label_30->setText(QApplication::translate("capcolu", "5-7\357\274\232", Q_NULLPTR));
        label_31->setText(QApplication::translate("capcolu", "7-8\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class capcolu: public Ui_capcolu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPCOLU_H
