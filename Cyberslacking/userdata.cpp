#include "userdata.h"

UserData::UserData()
{
}

UserData::~UserData()
{
}

int UserData::get_income() const
{
	return _income;
}

int UserData::get_hour() const
{
	return _hour;
}

int UserData::get_days() const
{
	return _days;
}

void UserData::set_income(int income)
{
	_income = income;
}

void UserData::set_hour(int hour)
{
	_hour = hour;
}

void UserData::set_days(int days)
{
	_days = days;
}
