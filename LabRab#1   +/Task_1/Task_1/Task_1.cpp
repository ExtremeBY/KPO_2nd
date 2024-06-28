// Task_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "stdafx.h"
#include "Macros.h"

int main()
{
    SCOCP1251
    SCCP1251
    int date = 0;
    vi "Enter Your Date"; nl
    vv date;

    while (check(date) == 1)
    {
        vi "Correct Your Date"; nl
            date = 0;
        vv date;
    }

    //day
    int day = get_day(date);
    vi day; vi ".";

    //month
    int month = get_month(date);
    vi month; vi "("; monthName(month); vi ")"; vi ".";

    //year
    int year = get_year(date);
    vi year; nl nl nl

    //days in months
    int days_in_month[12];
    for (int i = 0; i < 12; i++)
    {
        days_in_month[i] = get_days_in_month(year, i);
    }
    is_Visok(days_in_month);
    //serial number of a day
    int serial_number_of_day_ = 0;
    serial_number_of_day_ = serial_number_of_day(month, days_in_month, day);
    vi "serial number - "; vi serial_number_of_day_; nl nl nl

    //days before birthday
    int days_bef_birthday = 0;
    days_bef_birthday = days_before_birthday(day, month, days_in_month, serial_number_of_day_);
    vi "days before birthday - "; vi days_bef_birthday;
    nl nl nl

    int ser_num_not_checked = 1;
    vi "Enter serial number of day"; nl
    vv ser_num_not_checked;
    int ser_num = 1;
    ser_num = Date_From_Day_Of_Year(ser_num_not_checked, days_in_month);
    dateFromDayOfYear(ser_num, year, days_in_month);
    system("pause");

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
