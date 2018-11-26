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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_cuicapcolu
{
public:
    QGridLayout *gridLayout;
    QChartView *textEdit;

    void setupUi(QWidget *cuicapcolu)
    {
        if (cuicapcolu->objectName().isEmpty())
            cuicapcolu->setObjectName(QStringLiteral("cuicapcolu"));
        cuicapcolu->resize(500, 300);
        cuicapcolu->setMinimumSize(QSize(500, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/\346\274\202\344\272\256ico/\345\252\222\344\275\223/c6.ico"), QSize(), QIcon::Normal, QIcon::Off);
        cuicapcolu->setWindowIcon(icon);
        gridLayout = new QGridLayout(cuicapcolu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QChartView(cuicapcolu);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);


        retranslateUi(cuicapcolu);

        QMetaObject::connectSlotsByName(cuicapcolu);
    } // setupUi

    void retranslateUi(QWidget *cuicapcolu)
    {
        cuicapcolu->setWindowTitle(QApplication::translate("cuicapcolu", "\347\224\265\345\256\271\346\225\260\346\215\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class cuicapcolu: public Ui_cuicapcolu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPCOLU_H
