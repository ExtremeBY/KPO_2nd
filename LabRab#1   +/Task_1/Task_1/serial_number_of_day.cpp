#include "stdafx.h"
int serial_number_of_day(int month, int days_in_month[12], int day)
{
	int serial_number = 0;
	for (int i = 0; i < month - 1; i++)
	{
		serial_number += days_in_month[i];
	}
	return serial_number + day;
}