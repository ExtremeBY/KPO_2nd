#include "stdafx.h"
int days_before_birthday(int day, int month, int days_in_month[12], int serial_number_of_day_)
{

	int day_of_birth = 12;

	int month_of_birth = 2;

	int serial_number_of_birthday = 0;
	for (int i = 0; i < month_of_birth - 1; i++)
	{
		serial_number_of_birthday += days_in_month[i];
	}
	serial_number_of_birthday += day_of_birth;

	int days_in_year = 0;
	for (int i = 0; i < 12; i++)
	{
		days_in_year += days_in_month[i];
	}
	if (serial_number_of_day_ > serial_number_of_birthday)
		return days_in_year - serial_number_of_day_ + serial_number_of_birthday;
	else
		if (serial_number_of_day_ == serial_number_of_birthday)
		{
			vi "Happy Birthday!"; nl
			return 0;
		}
		else
			return serial_number_of_birthday - serial_number_of_day_;
}