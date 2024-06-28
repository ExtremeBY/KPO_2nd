#include "stdafx.h"
int get_days_in_month(int year, int i)
{
	if (i == 0 || i == 2 || i == 4 || i == 6 || i == 7 || i == 9 || i == 11)
		return 31;
	else
		if (i == 3 || i == 5 || i == 8 || i == 10)
			return 30;
	if (i == 1 && year % 4 == 0)
		return 29;
	else 
		return 28;
}