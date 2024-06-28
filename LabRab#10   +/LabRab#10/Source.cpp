#include <iostream>
#include <algorithm>
#include <vector>
#include <Windows.h>
#define vi cout <<
#define nl cout << '\n';
#define nw cout << '\t';
#define ret return
#define pause system("pause");
#define SCOCP1251 SetConsoleOutputCP(1251);
#define SCCP1251 SetConsoleCP(1251);
using namespace std;

int main(int argc, char* argv[])
{
	SCOCP1251
	SCCP1251
	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
	int target1 = 3;

	int num_items1 = count(v.begin(), v.end(), target1);
	nw vi "число:"; nw vi target1; nw vi "количество:"; nw vi num_items1; nl
	int num_items3 = count_if(v.begin(), v.end(), [](int i) {ret i % 3 == 0; });
	nw vi "количество элементов кратных 3:"; nw vi num_items3; nl

	nl nw vi "Лямбда, захват переменных"; nl
	for (auto i : v) [i]() {if (i % 3 == 0) vi i; nw }();
	nl nw vi "Лямбда с параметрами"; nl
	for (auto i : v) [](auto i) {if (i % 3 == 0) vi i; nw }(i);
	nl nw vi "Лямбда без параметров"; nl
	for (auto i : v) [i] {if (i % 3 == 0) vi i; nw }();
	nl nw
	pause
	ret 0;
}