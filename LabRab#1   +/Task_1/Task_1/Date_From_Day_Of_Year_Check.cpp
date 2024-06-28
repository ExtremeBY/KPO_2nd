#include "stdafx.h"
int Date_From_Day_Of_Year(int ser_num, int days_in_month[12])
{
	if (ser_num < 365 && days_in_month[1] == 28 && ser_num >= 1)
	{
		return ser_num;
	}
	else
		if (ser_num < 366 && days_in_month[1] == 29 && ser_num >= 1)
		{
			return ser_num;
		}
}