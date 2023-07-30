#include "VTKPlatform.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	VTKPlatform w;
	w.show();
	return a.exec();
}