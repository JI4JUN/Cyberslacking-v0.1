#include "userdata2json.h"
#include "globalsignaltable.h"
#include <QFile>
#include <QJsonDocument>
#include <QDebug>

UserData2Json::UserData2Json(QObject* parent)
	: QObject(parent)
{
	connect(
		GlobalSignalTable::getInstance(),
		&GlobalSignalTable::res_confirm_pushButton_clicked_signal,
		this,
		&UserData2Json::req_confirm_pushButton_clicked
	);
}

UserData2Json::~UserData2Json()
{}

void UserData2Json::req_confirm_pushButton_clicked(double hour, double days, double income)
{
	QFile file("./userdata.json");
	if (!file.exists())
	{
		qDebug() << "文件不存在，创建一个json文件";
		file.open(QIODevice::ReadWrite);
		file.close();
	}

	QJsonObject userdata;
	userdata.insert("hour", hour);
	userdata.insert("days", days);
	userdata.insert("income", income);
	userdata.insert("daily", income / days);
	userdata.insert("hourly", income / days / hour);

	if (file.open(QIODevice::WriteOnly | QIODevice::Truncate))
	{
		QJsonDocument userdatadoc(userdata);
		file.write(userdatadoc.toJson(QJsonDocument::Indented));
		file.close();
	}
	else
		qDebug() << "文件打开失败";
}
