#pragma once
#include "Macros.h"
int check(int date);
int days_before_birthday(int day, int month, int days_in_month[12], int serial_number_of_day_);
int get_day(int date);
int get_days_in_month(int year, int i);
int get_month(int date);
int get_year(int date);
int serial_number_of_day(int month, int days_in_month[12], int day);
int Date_From_Day_Of_Year(int ser_num, int days_in_month[12]);
void is_Visok(int days_in_month[12]);
void monthName(int month);
void dateFromDayOfYear(int day_of_year, int year, int days_in_month[12]);