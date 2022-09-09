#include "cyberslacking.h"
#include "initialization.h"
#include <QtWidgets/QApplication>
#include <QTime>
#include <QDebug>

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	Cyberslacking w;
	w.show();

	return a.exec();
}
