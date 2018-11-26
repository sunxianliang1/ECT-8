#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include"communication.h"
#include"cuicapcolu.h"
//#include"cuiconline.h"
//#include"cuiconcir.h"
//#include"cuiconrect.h"
#include"compute.h"
#include"option.h"

#include<qmath.h>
#include<QMainWindow>
#include <QMdiSubWindow>
#include<QFileDialog>
#include<QDir>
#include<QFile>
#include<QFileInfo>
#include<QDateTime>
#include<QDataStream>
#include<QTextStream>
#include<QVector>
#include<QLabel>
#include <QDesktopServices>
#include <QUrl>
namespace Ui {
class MainWindow;
}
struct  savefile
{
    QFile*        filename;
    QString       strname;
    QDataStream   dat;
    QTextStream   text;
    bool          run;
};
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    //子界面
    communication    *uicommun;//通讯设置窗口
    cuicapcolu       *uicapcolu;//电容数据窗口
//    cuiconline       *uiconline;//浓度曲线窗口
//    cuiconcir        *uiconcir;//圆形形截面浓度窗口
//    cuiconrect       *uiconrect;//浓度截面窗口
    QMdiSubWindow    *mdicapcolu;
    QMdiSubWindow    *mdiconline;
    QMdiSubWindow    *mdiconcir;
    QMdiSubWindow    *mdiconrect;

    //数据
    compute  comdata;
    float k_of_calibration;//标定系数
    float b_of_calibration;
    float fltcapdata[N];//电容数据
    float fltcondata[M+1];//圆形形截面浓度数据
    //文件存储
    QString root_save_directory;//文件保存根目录
    QString now_save_directory;//当前文件保存目录
    //保存数据
    savefile fltcapdata_dat;//电容数据.dat
    savefile fltcapdata_txt;//电容数据.txt
    savefile intcapdata_txt;//电容原始数据
    savefile fltcondata_txt;//浓度数据
    savefile fltconcir_txt; //圆形截面浓度
    savefile fltconrect_txt;//矩形截面浓度
    savefile read_cdata_dat;//读取数据
    savefile calibration;   //标定数据
    savefile jpgconcir_jpg; //圆形截面截图
    savefile jpgconrect_jpg;//矩形截面截图
    QString   str_datetime;//系统时间(字符串)
    QDateTime time_datetime;//系统时间(时间类)
    QTimer    *readtime;//定义一个定时器
    //标志
    bool   runningflag;//运行标志（是否在测量）
    bool   pause;//暂停标志
    enum   way {byreal,byfile,bynull}  ccway;//运行模式

    float time;
    int   count;
    float fps;
    int   playertime;
};

#endif // MAINWINDOW_H
