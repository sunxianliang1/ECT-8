#include "cuicapcolu.h"
#include <ui_capcolu.h>
cuicapcolu::cuicapcolu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::capcolu)
{
    ui->setupUi(this);
    x.resize(28);
    y.resize(28);
    for (int i=0;i<28;i++)
    {
        x[i]=i;
        y[i]=i/28.0;
    }
    myBars = new QCPBars(ui->cdataview->xAxis,ui->cdataview->yAxis);
    myBars->setData(x,y);
    ui->cdataview->xAxis->setLabel(tr("序号"));
    ui->cdataview->yAxis->setLabel(tr("电容"));
    ui->cdataview->xAxis->setRange(-1,27.5);
    ui->cdataview->yAxis->setRange(0,1.5);
    ui->cdataview->replot();
}
cuicapcolu::~cuicapcolu()
{
    delete ui;
}
void cuicapcolu::plot(const float cdata[])
{
    for (int i=0;i<28;i++)
    {
        y[i]=cdata[i];
    }
    myBars->setData(x,y);
    ui->cdataview->replot();
    QString a;

    a.setNum(cdata[0]);
    ui->lineEdit1->setText(a);
    a.setNum(cdata[1]);
    ui->lineEdit2->setText(a);
    a.setNum(cdata[2]);
    ui->lineEdit3->setText(a);
    a.setNum(cdata[3]);
    ui->lineEdit4->setText(a);
    a.setNum(cdata[4]);
    ui->lineEdit5->setText(a);
    a.setNum(cdata[5]);
    ui->lineEdit6->setText(a);
    a.setNum(cdata[6]);
    ui->lineEdit7->setText(a);
    a.setNum(cdata[7]);
    ui->lineEdit8->setText(a);
    a.setNum(cdata[8]);
    ui->lineEdit9->setText(a);
    a.setNum(cdata[9]);
    ui->lineEdit10->setText(a);
    a.setNum(cdata[10]);
    ui->lineEdit11->setText(a);
    a.setNum(cdata[11]);
    ui->lineEdit12->setText(a);
    a.setNum(cdata[12]);
    ui->lineEdit13->setText(a);
    a.setNum(cdata[13]);
    ui->lineEdit14->setText(a);
    a.setNum(cdata[14]);
    ui->lineEdit15->setText(a);
    a.setNum(cdata[15]);
    ui->lineEdit16->setText(a);
    a.setNum(cdata[16]);
    ui->lineEdit17->setText(a);
    a.setNum(cdata[17]);
    ui->lineEdit18->setText(a);
    a.setNum(cdata[18]);
    ui->lineEdit19->setText(a);
    a.setNum(cdata[19]);
    ui->lineEdit20->setText(a);
    a.setNum(cdata[20]);
    ui->lineEdit21->setText(a);
    a.setNum(cdata[21]);
    ui->lineEdit22->setText(a);
    a.setNum(cdata[22]);
    ui->lineEdit23->setText(a);
    a.setNum(cdata[23]);
    ui->lineEdit24->setText(a);
    a.setNum(cdata[24]);
    ui->lineEdit25->setText(a);
    a.setNum(cdata[25]);
    ui->lineEdit26->setText(a);
    a.setNum(cdata[26]);
    ui->lineEdit27->setText(a);
    a.setNum(cdata[27]);
    ui->lineEdit28->setText(a);
}
void cuicapcolu::closeEvent(QCloseEvent *event)
{
    emit HideIt();
    event->ignore();
}
