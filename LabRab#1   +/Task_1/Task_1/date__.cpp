#include "stdafx.h"
#include "Macros.h"
void dateFromDayOfYear(int day_of_year, int year, int days_in_month[12]) {
    int month = 0;
    int temp = day_of_year;
    while (day_of_year > days_in_month[month]) {
        day_of_year -= days_in_month[month];
        month++;
    }
    int ans = 0;
    for (int i = 0; i < month; i++)
    {
         ans += days_in_month[i];
    }
    temp -= ans;

    vi to_string(temp) + " "; monthName(month + 1); vi " " + to_string(year); nl
    if (day_of_year == 255 && days_in_month[1] == 28)
    {
        vi "Programmist's Day"; nl nl nl
    }
    else 
        if (day_of_year == 256 && days_in_month[1] == 29)
        {
            vi "Programmist's Day"; nl nl nl
        }
    if (day_of_year == 152 && days_in_month[1] == 28)
    {
        vi "The First Day Of Summer!"; nl nl nl
    }
    else 
        if (day_of_year == 153 && days_in_month[1] == 29)
        {
            vi "The First Day Of Summer!"; nl nl nl
        }
    nl nl nl
}