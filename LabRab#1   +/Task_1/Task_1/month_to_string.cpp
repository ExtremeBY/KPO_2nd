#include "stdafx.h"
#include "Macros.h"
void monthName(int monthNumber) {
    string months[12];
    months[0] = "Январь";
    months[1] = "Февраль";
    months[2] = "Март";
    months[3] = "Апрель";
    months[4] = "Май";
    months[5] = "Июнь";
    months[6] = "Июль";
    months[7] = "Август";
    months[8] = "Сентябрь";
    months[9] = "Октябрь";
    months[10] = "Ноябрь";
    months[11] = "Декабрь";
    vi months[monthNumber - 1];
}