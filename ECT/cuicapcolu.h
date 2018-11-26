#ifndef CUICAPCOLU_H
#define CUICAPCOLU_H

#include<option.h>
#include <QWidget>
#include <QtCharts/QChart>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
using namespace QtCharts;

namespace Ui {
class cuicapcolu;
}

class cuicapcolu : public QWidget
{
    Q_OBJECT
signals:
   void HideIt();
public:
    explicit cuicapcolu(QWidget *parent = 0);
    ~cuicapcolu();
    void plot(const float cdata[]);
    void closeEvent(QCloseEvent *event);
private:
    Ui::cuicapcolu *ui;
    QBarSet *set0;
    QBarSeries *series;
    QChart *chart ;
};

#endif // CUICAPCOLU_H
