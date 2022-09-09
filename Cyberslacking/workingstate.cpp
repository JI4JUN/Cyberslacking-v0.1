#include "workingstate.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>

WorkingState* WorkingState::instance = nullptr;
WorkingState* WorkingState::getInstance()
{
	if (!WorkingState::instance)
		WorkingState::instance = new WorkingState;

	return WorkingState::instance;
}

double WorkingState::getIncome()
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

WorkingState::WorkingState(QTimer* parent)
	: QTimer(parent)
{}

WorkingState::~WorkingState()
{}
