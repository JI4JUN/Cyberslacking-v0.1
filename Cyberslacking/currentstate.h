#pragma once

#include <QTimer>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>
#include <QDateTime>

class CurrentState  : public QTimer
{
	Q_OBJECT

public:
	CurrentState(QObject *parent = nullptr);
	~CurrentState();

public:
	double getIncome();
	double workingTime = 0.;
	QDateTime startTime;
	QDateTime finishTime;
};
