/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_open_file;
    QAction *action_exit;
    QAction *action_capcolu;
    QAction *action_conline;
    QAction *action_concir;
    QAction *action_help;
    QAction *action_about;
    QAction *action_set_commun;
    QAction *action_save_location;
    QAction *action_start_commun;
    QAction *action_stop_commun;
    QAction *action_startfile;
    QAction *action_pausefile;
    QAction *action_stopfile;
    QAction *action_conrect;
    QAction *actionSs;
    QAction *actionTj;
    QAction *action_read_cali;
    QAction *action_fltcapdata_dat;
    QAction *action_fltcapdata_txt;
    QAction *action_fltcondata_txt;
    QAction *action_fltconline_txt;
    QAction *action_fltconcir_txt;
    QAction *action_intcapdata_txt;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menu_file;
    QMenu *menu_view;
    QMenu *menu_help;
    QMenu *menu;
    QMenu *menu_3;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_staus;
    QWidget *dockWidgetContents;
    QTextEdit *textEdit_timeshow;
    QTextEdit *textEdit_filepath;
    QDockWidget *dockWidget_player;
    QWidget *dockWidgetContents_5;
    QDial *dial_player;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 550);
        MainWindow->setMinimumSize(QSize(800, 550));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/F:/\346\274\202\344\272\256ico/\346\210\221\347\232\204\347\224\265\350\204\221/c6.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_open_file = new QAction(MainWindow);
        action_open_file->setObjectName(QStringLiteral("action_open_file"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/\346\274\202\344\272\256ico/\346\226\207\344\273\266\346\223\215\344\275\234/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_open_file->setIcon(icon1);
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QStringLiteral("action_exit"));
        action_capcolu = new QAction(MainWindow);
        action_capcolu->setObjectName(QStringLiteral("action_capcolu"));
        action_capcolu->setCheckable(false);
        action_capcolu->setChecked(false);
        action_capcolu->setVisible(true);
        action_conline = new QAction(MainWindow);
        action_conline->setObjectName(QStringLiteral("action_conline"));
        action_conline->setCheckable(false);
        action_conline->setChecked(false);
        action_concir = new QAction(MainWindow);
        action_concir->setObjectName(QStringLiteral("action_concir"));
        action_concir->setCheckable(false);
        action_concir->setChecked(false);
        action_help = new QAction(MainWindow);
        action_help->setObjectName(QStringLiteral("action_help"));
        action_about = new QAction(MainWindow);
        action_about->setObjectName(QStringLiteral("action_about"));
        action_set_commun = new QAction(MainWindow);
        action_set_commun->setObjectName(QStringLiteral("action_set_commun"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/\346\274\202\344\272\256ico/\346\226\207\344\273\266\346\223\215\344\275\234/gear.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_set_commun->setIcon(icon2);
        action_save_location = new QAction(MainWindow);
        action_save_location->setObjectName(QStringLiteral("action_save_location"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/\346\274\202\344\272\256ico/\346\226\207\344\273\266\346\223\215\344\275\234/save_as.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_save_location->setIcon(icon3);
        action_start_commun = new QAction(MainWindow);
        action_start_commun->setObjectName(QStringLiteral("action_start_commun"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/\346\274\202\344\272\256ico/\346\226\207\344\273\266\346\223\215\344\275\234/media_playback_start.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_start_commun->setIcon(icon4);
        action_stop_commun = new QAction(MainWindow);
        action_stop_commun->setObjectName(QStringLiteral("action_stop_commun"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/\346\274\202\344\272\256ico/\346\226\207\344\273\266\346\223\215\344\275\234/delete_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_stop_commun->setIcon(icon5);
        action_startfile = new QAction(MainWindow);
        action_startfile->setObjectName(QStringLiteral("action_startfile"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/\346\274\202\344\272\256ico/\345\252\222\344\275\223/play_24.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_startfile->setIcon(icon6);
        action_pausefile = new QAction(MainWindow);
        action_pausefile->setObjectName(QStringLiteral("action_pausefile"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/\346\274\202\344\272\256ico/\345\252\222\344\275\223/pause_24.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_pausefile->setIcon(icon7);
        action_stopfile = new QAction(MainWindow);
        action_stopfile->setObjectName(QStringLiteral("action_stopfile"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/\346\274\202\344\272\256ico/\345\252\222\344\275\223/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_stopfile->setIcon(icon8);
        action_conrect = new QAction(MainWindow);
        action_conrect->setObjectName(QStringLiteral("action_conrect"));
        action_conrect->setCheckable(false);
        actionSs = new QAction(MainWindow);
        actionSs->setObjectName(QStringLiteral("actionSs"));
        actionTj = new QAction(MainWindow);
        actionTj->setObjectName(QStringLiteral("actionTj"));
        action_read_cali = new QAction(MainWindow);
        action_read_cali->setObjectName(QStringLiteral("action_read_cali"));
        action_fltcapdata_dat = new QAction(MainWindow);
        action_fltcapdata_dat->setObjectName(QStringLiteral("action_fltcapdata_dat"));
        action_fltcapdata_dat->setCheckable(true);
        action_fltcapdata_dat->setChecked(true);
        action_fltcapdata_txt = new QAction(MainWindow);
        action_fltcapdata_txt->setObjectName(QStringLiteral("action_fltcapdata_txt"));
        action_fltcapdata_txt->setCheckable(true);
        action_fltcapdata_txt->setChecked(true);
        action_fltcondata_txt = new QAction(MainWindow);
        action_fltcondata_txt->setObjectName(QStringLiteral("action_fltcondata_txt"));
        action_fltcondata_txt->setCheckable(true);
        action_fltcondata_txt->setChecked(true);
        action_fltconline_txt = new QAction(MainWindow);
        action_fltconline_txt->setObjectName(QStringLiteral("action_fltconline_txt"));
        action_fltconline_txt->setCheckable(true);
        action_fltconcir_txt = new QAction(MainWindow);
        action_fltconcir_txt->setObjectName(QStringLiteral("action_fltconcir_txt"));
        action_fltconcir_txt->setCheckable(true);
        action_intcapdata_txt = new QAction(MainWindow);
        action_intcapdata_txt->setObjectName(QStringLiteral("action_intcapdata_txt"));
        action_intcapdata_txt->setCheckable(true);
        action_intcapdata_txt->setChecked(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mdiArea->sizePolicy().hasHeightForWidth());
        mdiArea->setSizePolicy(sizePolicy);
        mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        mdiArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        QBrush brush(QColor(184, 184, 184, 255));
        brush.setStyle(Qt::SolidPattern);
        mdiArea->setBackground(brush);

        horizontalLayout->addWidget(mdiArea);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
        menu_file = new QMenu(menuBar);
        menu_file->setObjectName(QStringLiteral("menu_file"));
        menu_view = new QMenu(menuBar);
        menu_view->setObjectName(QStringLiteral("menu_view"));
        menu_help = new QMenu(menuBar);
        menu_help->setObjectName(QStringLiteral("menu_help"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_3 = new QMenu(menu);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_3->setTearOffEnabled(true);
        menu_3->setSeparatorsCollapsible(false);
        menu_3->setToolTipsVisible(false);
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setIconSize(QSize(20, 20));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setSizeGripEnabled(true);
        MainWindow->setStatusBar(statusBar);
        dockWidget_staus = new QDockWidget(MainWindow);
        dockWidget_staus->setObjectName(QStringLiteral("dockWidget_staus"));
        dockWidget_staus->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidget_staus->sizePolicy().hasHeightForWidth());
        dockWidget_staus->setSizePolicy(sizePolicy1);
        dockWidget_staus->setMinimumSize(QSize(120, 140));
        dockWidget_staus->setFloating(false);
        dockWidget_staus->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidget_staus->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy2);
        textEdit_timeshow = new QTextEdit(dockWidgetContents);
        textEdit_timeshow->setObjectName(QStringLiteral("textEdit_timeshow"));
        textEdit_timeshow->setEnabled(true);
        textEdit_timeshow->setGeometry(QRect(5, 0, 111, 40));
        sizePolicy2.setHeightForWidth(textEdit_timeshow->sizePolicy().hasHeightForWidth());
        textEdit_timeshow->setSizePolicy(sizePolicy2);
        textEdit_timeshow->setMinimumSize(QSize(90, 40));
        textEdit_timeshow->setReadOnly(false);
        textEdit_filepath = new QTextEdit(dockWidgetContents);
        textEdit_filepath->setObjectName(QStringLiteral("textEdit_filepath"));
        textEdit_filepath->setGeometry(QRect(5, 50, 111, 61));
        textEdit_filepath->setReadOnly(true);
        dockWidget_staus->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_staus);
        dockWidget_player = new QDockWidget(MainWindow);
        dockWidget_player->setObjectName(QStringLiteral("dockWidget_player"));
        dockWidget_player->setMinimumSize(QSize(120, 140));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        dial_player = new QDial(dockWidgetContents_5);
        dial_player->setObjectName(QStringLiteral("dial_player"));
        dial_player->setGeometry(QRect(10, 10, 100, 100));
        dial_player->setMinimum(1);
        dial_player->setMaximum(100);
        dial_player->setValue(1);
        dial_player->setWrapping(false);
        dial_player->setNotchTarget(2);
        dial_player->setNotchesVisible(true);
        label = new QLabel(dockWidgetContents_5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 100, 16, 16));
        label_2 = new QLabel(dockWidgetContents_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 100, 21, 16));
        label_3 = new QLabel(dockWidgetContents_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(55, -2, 16, 16));
        label_4 = new QLabel(dockWidgetContents_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 52, 16, 16));
        label_5 = new QLabel(dockWidgetContents_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 52, 21, 16));
        dockWidget_player->setWidget(dockWidgetContents_5);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_player);
        QWidget::setTabOrder(textEdit_timeshow, textEdit_filepath);
        QWidget::setTabOrder(textEdit_filepath, dial_player);

        menuBar->addAction(menu_file->menuAction());
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_view->menuAction());
        menuBar->addAction(menu_help->menuAction());
        menu_file->addAction(action_save_location);
        menu_file->addAction(action_exit);
        menu_view->addAction(action_capcolu);
        menu_view->addAction(action_conline);
        menu_view->addAction(action_concir);
        menu_view->addAction(action_conrect);
        menu_help->addAction(action_help);
        menu_help->addAction(action_about);
        menu->addAction(action_set_commun);
        menu->addSeparator();
        menu->addAction(action_start_commun);
        menu->addAction(action_stop_commun);
        menu->addSeparator();
        menu->addAction(menu_3->menuAction());
        menu_3->addAction(action_fltcapdata_dat);
        menu_3->addAction(action_fltcapdata_txt);
        menu_3->addAction(action_intcapdata_txt);
        menu_3->addAction(action_fltcondata_txt);
        menu_3->addAction(action_fltconline_txt);
        menu_3->addAction(action_fltconcir_txt);
        menu_2->addAction(action_open_file);
        menu_2->addSeparator();
        menu_2->addAction(action_startfile);
        menu_2->addAction(action_pausefile);
        menu_2->addAction(action_stopfile);
        mainToolBar->addAction(action_start_commun);
        mainToolBar->addAction(action_stop_commun);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_capcolu);
        mainToolBar->addAction(action_conline);
        mainToolBar->addAction(action_concir);
        mainToolBar->addAction(action_conrect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_open_file);
        mainToolBar->addAction(action_startfile);
        mainToolBar->addAction(action_pausefile);
        mainToolBar->addAction(action_stopfile);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ECT\347\263\273\347\273\237", Q_NULLPTR));
        action_open_file->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        action_exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_exit->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_capcolu->setText(QApplication::translate("MainWindow", "\347\224\265\345\256\271\346\225\260\346\215\256", Q_NULLPTR));
        action_conline->setText(QApplication::translate("MainWindow", "\346\265\223\345\272\246\346\233\262\347\272\277", Q_NULLPTR));
        action_concir->setText(QApplication::translate("MainWindow", "\345\234\206\346\210\252\351\235\242\346\265\223\345\272\246", Q_NULLPTR));
        action_help->setText(QApplication::translate("MainWindow", "\344\275\277\347\224\250\345\270\256\345\212\251", Q_NULLPTR));
        action_about->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", Q_NULLPTR));
        action_set_commun->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245\344\270\213\344\275\215\346\234\272", Q_NULLPTR));
        action_save_location->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\344\275\215\347\275\256", Q_NULLPTR));
        action_start_commun->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\265\213\351\207\217", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_start_commun->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_stop_commun->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\346\265\213\351\207\217", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_stop_commun->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_startfile->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        action_startfile->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        action_startfile->setShortcut(QApplication::translate("MainWindow", "F10", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_pausefile->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        action_pausefile->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        action_pausefile->setShortcut(QApplication::translate("MainWindow", "F9", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_stopfile->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        action_stopfile->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        action_stopfile->setShortcut(QApplication::translate("MainWindow", "F8", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_conrect->setText(QApplication::translate("MainWindow", "\347\237\251\346\210\252\351\235\242\346\265\223\345\272\246", Q_NULLPTR));
        actionSs->setText(QApplication::translate("MainWindow", "\346\265\223\345\272\246\346\233\262\347\272\277", Q_NULLPTR));
        actionTj->setText(QApplication::translate("MainWindow", "\346\265\223\345\272\246\345\210\206\345\270\203", Q_NULLPTR));
        action_read_cali->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\346\240\207\345\256\232", Q_NULLPTR));
        action_fltcapdata_dat->setText(QApplication::translate("MainWindow", "\347\224\265\345\256\271\346\225\260\346\215\256(dat)", Q_NULLPTR));
        action_fltcapdata_txt->setText(QApplication::translate("MainWindow", "\347\224\265\345\256\271\346\225\260\346\215\256(txt)", Q_NULLPTR));
        action_fltcondata_txt->setText(QApplication::translate("MainWindow", "\346\265\223\345\272\246\346\225\260\346\215\256", Q_NULLPTR));
        action_fltconline_txt->setText(QApplication::translate("MainWindow", "\345\234\206\346\210\252\351\235\242\346\265\223\345\272\246", Q_NULLPTR));
        action_fltconcir_txt->setText(QApplication::translate("MainWindow", "\347\237\251\346\210\252\351\235\242\346\265\223\345\272\246", Q_NULLPTR));
        action_intcapdata_txt->setText(QApplication::translate("MainWindow", "\346\225\264\346\225\260\346\225\260\346\215\256(txt)", Q_NULLPTR));
        menu_file->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        menu_view->setTitle(QApplication::translate("MainWindow", "\350\247\206\345\233\276(&V)", Q_NULLPTR));
        menu_help->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\345\256\236\346\227\266\346\265\213\351\207\217", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256\347\261\273\345\210\253", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\216\206\345\217\262\346\225\260\346\215\256", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        mainToolBar->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        dockWidget_staus->setWindowTitle(QApplication::translate("MainWindow", "\347\212\266\346\200\201", Q_NULLPTR));
        textEdit_timeshow->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">time:00:00</p></body></html>", Q_NULLPTR));
        textEdit_filepath->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">file:/data</p></body></html>", Q_NULLPTR));
        dockWidget_player->setWindowTitle(QApplication::translate("MainWindow", "\345\233\236\346\224\276\351\200\237\345\272\246", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "100", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "20", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "80", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
