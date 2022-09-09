#include "currentstate.h"

CurrentState::CurrentState(QObject *parent)
	: QTimer(parent)
{}

CurrentState::~CurrentState()
{}

double CurrentState::getIncome()
{
	double hourlyIncome = 0.;

	QFile jsfile("./userdata.json");
	jsfile.open(QIODevice::ReadOnly);

	QJsonDocument jsdoc = QJsonDocument::fromJson(jsfile.readAll());
	QJsonObject user = jsdoc.object();

	hourlyIncome = user.value("hourly").toDouble();

	jsfile.close();
	return hourlyIncome;
}
