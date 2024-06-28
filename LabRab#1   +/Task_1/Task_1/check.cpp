#include "stdafx.h"
int check(int date)
{
	if (date / 1000000 <= 31 && ((date % 1000000 - date % 10000) / 10000) <= 12 && ((date % 1000000 - date % 10000) / 10000) >= 0)
	{
		int days_in_month[12];
		for (int i = 0; i < 12; i++)
		{
			days_in_month[i] = get_days_in_month(date % 10000, i);
		}
		if (date / 1000000 <= days_in_month[(date / 10000) % 100 - 1])
		{
			return date;
		}
		else return 1;
	}
	else return 1;
}