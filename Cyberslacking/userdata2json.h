#pragma once

#include <QObject>
#include <QJsonObject>

class UserData2Json  : public QObject
{
	Q_OBJECT

public:
	UserData2Json(QObject *parent = nullptr);
	~UserData2Json();

private slots:
	void req_confirm_pushButton_clicked(double hour, double days, double income);
};
