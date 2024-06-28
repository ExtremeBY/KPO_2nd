#include "stdafx.h"
int get_month(int date)
{
	return (date - date / 1000000) / 10000 % 100;
}