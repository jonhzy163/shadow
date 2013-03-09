# =====================================================================================
# 
#       Filename:  shadow.pro
#
#    Description:  为 Win32 环境书写的 Qt 项目文件
#
#        Created:  2013年03月05日 20时30分01秒
#
#         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
#        Company:  Class 1107 of Computer Science and Technology
#
# =====================================================================================

TEMPLATE = app
TARGET = 
DEPENDPATH += .
INCLUDEPATH += include \
				E:/OpenCV2.2/include \
				E:/OpenCV2.2/include/opencv

# debug control
#DEFINES+= QT_NO_DEBUG_OUTPUT

# Input

# lib file
LIBS += E:/OpenCV2.2/lib/*.lib

# include file
HEADERS +=  include/mainwindow.h include/debug.h include/linklistwidget.h include/filetreeview.h  \
			include/maintabwidget.h include/camareget.h include/camaredialog.h include/screenshotdialog.h \
			include/processtreeview.h include/servertreeview.h

# code file
SOURCES +=  src/main.cpp src/mainwindow.cpp src/linklistwidget.cpp src/filetreeview.cpp	\
			src/maintabwidget.cpp src/camareget.cpp src/camaredialog.cpp src/screenshotdialog.cpp \
			src/processtreeview.cpp src/servertreeview.cpp

# ui file
FORMS += ui/camaredialog.ui ui/screenshotdialog.ui

RESOURCES += shadow.qrc
RC_FILE = logo.rc
