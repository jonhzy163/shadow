// =====================================================================================
// 
//       Filename:  Main.cpp
//
//    Description:  shadow 程序的主函数文件，仅 main 函数的实现
//
//        Version:  1.0
//        Created:  2013年03月05日 21时09分07秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include <QtGui>

#include "MainWindow.h"
#include "Debug.h"

// #define QT_NO_DEBUG_OUTPUT

int main(int argc, char *argv[])
{
	// 注册错误日志的MsgHandler
	qInstallMsgHandler(customMessageHandler);  

	// 处理中文乱码问题
	QTextCodec *codec = QTextCodec::codecForName("system");

	QTextCodec::setCodecForTr(codec);
	QTextCodec::setCodecForLocale(codec);
	QTextCodec::setCodecForCStrings(codec);

	QApplication app(argc, argv);

	//加载Qt自带的控件汉化文件
	QTranslator translator;

	translator.load(":/res/language/qt_zh_CN.qm");
	app.installTranslator(&translator);

	// 添加启动logo
	QSplashScreen *splash = new QSplashScreen;

	splash->setPixmap(QPixmap(":/res/images/logo.png"));
	qDebug("显示启动画面\r\n");
	splash->show();
	
	MainWindow *mainwindow = new MainWindow;

	mainwindow->sleep(1000);

	mainwindow->show();
	qDebug("显示主窗口\r\n");

	qDebug("关闭启动画面\r\n");
	splash->finish(mainwindow);
	delete splash;

	return app.exec();
}

