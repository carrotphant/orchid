//
//
//

#include <QApplication>
#include <QPushbutton>
#include <QDir>
#include <QStandardPaths>
#include <QDebug>

int main(int argc, char **argv)
{
	QApplication a(argc, argv);

	QPushButton hello("Hello world!", 0);
	hello.resize(800, 600);
	hello.show();

	qDebug() << "Application Dir Path : " << QCoreApplication::applicationDirPath();
	qDebug() << "Application File Path : " << QCoreApplication::applicationFilePath();
	qDebug() << "Current Path : " << QDir::currentPath();

	qDebug() << "DocumentsLocation : " << QStandardPaths::locate(QStandardPaths::DocumentsLocation, QString(), QStandardPaths::LocateDirectory);
	qDebug() << "DownloadLocation : " << QStandardPaths::locate(QStandardPaths::DownloadLocation, QString(), QStandardPaths::LocateDirectory);
	qDebug() << "DesktopLocation : " << QStandardPaths::locate(QStandardPaths::DesktopLocation, QString(), QStandardPaths::LocateDirectory);
	
	qDebug() << "TempLocation : " << QStandardPaths::locate(QStandardPaths::TempLocation, QString(), QStandardPaths::LocateDirectory);
	qDebug() << "TempLocation(w) : " << QStandardPaths::writableLocation(QStandardPaths::TempLocation);

	qDebug() << "ApplicationsLocation : " << QStandardPaths::locate(QStandardPaths::ApplicationsLocation, QString(), QStandardPaths::LocateDirectory);
	qDebug() << "ApplicationsLocation(File) : " << QStandardPaths::locate(QStandardPaths::ApplicationsLocation, QString(), QStandardPaths::LocateFile);
	qDebug() << "HomeLocation : " << QStandardPaths::locate(QStandardPaths::HomeLocation, QString(), QStandardPaths::LocateDirectory);

	// DataLocation - deprecated. used AppDataLocation
	// qDebug() << "DataLocation : " << QStandardPaths::locate(QStandardPaths::DataLocation, QString(), QStandardPaths::LocateDirectory);
	// qDebug() << "DataLocation(w) : " << QStandardPaths::writableLocation(QStandardPaths::DataLocation);
	qDebug() << "AppDataLocation : " << QStandardPaths::locate(QStandardPaths::AppDataLocation, QString(), QStandardPaths::LocateDirectory);
	qDebug() << "AppDataLocation(w) : " << QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
	qDebug() << "AppConfigLocation : " << QStandardPaths::locate(QStandardPaths::AppConfigLocation, QString(), QStandardPaths::LocateDirectory);
	qDebug() << "AppConfigLocation(w) : " << QStandardPaths::writableLocation(QStandardPaths::AppConfigLocation);

	/*
		Application Dir Path :  "D:/MyGit/cp/dahlia_build_vs2019_x64/tests/test_02_qt_helloworld/Debug"
		Application File Path :  "D:/MyGit/cp/dahlia_build_vs2019_x64/tests/test_02_qt_helloworld/Debug/test_02_qt_helloworldd.exe"
		Current Path :  "D:/MyGit/cp/dahlia_build_vs2019_x64/tests/test_02_qt_helloworld"
		DocumentsLocation :  "C:/Users/user/Documents/"
		DownloadLocation :  "C:/Users/user/Downloads/"
		DesktopLocation :  "C:/Users/user/Desktop/"
		TempLocation :  "C:/Users/user/AppData/Local/Temp/"
		TempLocation(w) :  "C:/Users/user/AppData/Local/Temp"
		ApplicationsLocation :  "C:/Users/user/AppData/Roaming/Microsoft/Windows/Start Menu/Programs/"
		ApplicationsLocation(File) :  ""
		HomeLocation :  "C:/Users/user/"
		AppDataLocation :  "D:/MyGit/cp/dahlia_build_vs2019_x64/tests/test_02_qt_helloworld/Debug/"
		AppDataLocation(w) :  "C:/Users/user/AppData/Roaming/test_02_qt_helloworldd"
		AppConfigLocation :  "D:/MyGit/cp/dahlia_build_vs2019_x64/tests/test_02_qt_helloworld/Debug/"
		AppConfigLocation(w) :  "C:/Users/user/AppData/Local/test_02_qt_helloworldd"
	*/

	return a.exec();
}