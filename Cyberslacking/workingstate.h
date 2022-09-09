#pragma once

#include <QObject>
#include <QTimer>

class WorkingState  : public QTimer
{
	Q_OBJECT

public:
	~WorkingState();
	static WorkingState* getInstance();

public:
	double getIncome();

public:
	int workingTime = 1;

private:
	WorkingState(QTimer* parent = nullptr);
	static WorkingState* instance;
};
