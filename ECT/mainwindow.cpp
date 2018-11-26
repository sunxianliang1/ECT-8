#include "mainwindow.h"
#include "ui_mainwindow.h"

/*************************************
 * ECT成像系统
 * 作者：孙先亮
 *************************************
 * 2016.11.21更新：增加时间显示，增益按钮
 * 电容计算增加最小二乘法
 * 2016.12.06
 * 删除最小二乘法，增加空满管判断机制，消除8个点
 * 2016.12.15
 * 增加回放帧率调节
 * 增加空满管判定成功后直接空管
 * 2016.12.16
 * 增加浓度分布图管壁
 * 浓度数据上限改为1.5
 * 2016.12.18
 * 增加帮助文件“help.docx”的打开
 * 2016.12.24
 * 暂时删除增益调节
 * 增加保存文件设置
 * 文件读写构建类savefile
 * 2016.12.26
 * 增加文件夹路径显示
 * 2017.1.6
 * 界面统计图优化，改为3行平均
 * 浓度曲线改为面积加权
 * 2017.2.9
 * 大幅度更改变量命名，使之更清晰
 * int整型  flt浮点  cui界面类  ui界面变量  mdi中央界面
 * cap电容  con浓度  commun通讯 txt文本  dat二进制
 * data数据 line曲线 cir圆形截面 rect矩形截面 colu柱状图
 * jpg图像
 * 20117.2.15
 * 增加截图功能
 * 截图必须用相对路径。
 * 文件名不能包含/\?:"<>|*
 * 2017.7.14
 * 矩形截面改为20行，切位同心圆
 * 2017.12.11
 * 增加实时标定功能
 * 2017.12.27
 * 改为12电极
 * 2018.1.2
 * 自动计算灵敏场特征值
 * 2018.1.3
 * 适应电极数，只需在源码option.h中更改注释选项
 ****/

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QDir::setCurrent(QCoreApplication::applicationDirPath());
    ui->setupUi(this);
    //电容数据曲线窗口初始化
    uicapcolu=new cuicapcolu();
    mdicapcolu=ui->mdiArea->addSubWindow(uicapcolu);
   // mdicapcolu->hide();
    connect(uicapcolu,SIGNAL(HideIt()),this,SLOT(uicapcoluhide()));


}

MainWindow::~MainWindow()
{
    delete ui;
}
