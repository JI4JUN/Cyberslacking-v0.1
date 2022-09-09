#pragma once

class Initialization;
class UserData
{
public:
	UserData();
	~UserData();

public:
	int get_hour() const;
	int get_days() const;
	int get_income() const;

	void set_hour(int hour);
	void set_days(int days);
	void set_income(int income);

private:
	int _hour = 0;	 // ����ʱ��
	int _days = 0;   // ��������
	int _income = 0; // ��н
};