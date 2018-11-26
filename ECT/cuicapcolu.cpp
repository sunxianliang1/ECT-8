#include "cuicapcolu.h"
#include "ui_capcolu.h"
#include <QtCharts/QChartView>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
using namespace QtCharts;

cuicapcolu::cuicapcolu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cuicapcolu)
{
    ui->setupUi(this);
    set0 = new QBarSet("");
    for(int i=1;i<=N;i++)
    {
        *set0 <<i/28.0;
    }
    series = new QBarSeries();
    series->append(set0);
    series->setBarWidth(0.8);//条形宽度80%
    series->setUseOpenGL(1);
    chart = new QChart();
    chart->addSeries(series);
    chart->legend()->hide();//隐藏图例
    QStringList categories;
    for(int i=1;i<=N;i++)
    {

        categories<<QString::number(i);

    }
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);
    chart->titleFont();
    ui->textEdit->setChart(chart);
float a[28];
    plot(a);
}

cuicapcolu::~cuicapcolu()
{
    delete ui;
}

void cuicapcolu::plot(const float cdata[])
{
    series->remove(set0);
    for(int i=1;i<=N;i++)
    {
        *set1 <<1-i/28.0;
    }
    series->append(set1);
     //ui->textEdit->update();
}
void cuicapcolu::closeEvent(QCloseEvent *event)
{
    emit HideIt();
    event->ignore();
}
