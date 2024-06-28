#include "Macros.h"

int sum(int x, int y) { return x + y; }
int sub(int x, int y) { return x - y; }
int (*f) (int, int);

int main()
{
	int const n = 14;
	SCOCP1251
	SCCP1251
	// 5)Объявление булевых переменных
	bool tr = true;
	bool fal = false;

	// 6) Объявление переменной char
	char sec_let_eng = 'R';
	char sec_let_rus = 'Р';
	
	//8) Объявление переменной типа wchar_t  
	// На Windows занимает в памяти 2 байта (16 бит)
	wchar_t first_let_eng = L'G';
	wchar_t first_let_rus = L'Г';
	
	// 9)Объявление переменной типа short
	short X_pos = 9 + n; 
	// Ручной перевод:
    // 23 в двоичном предствалении = 10111
	// 00010111 в шестнадцатеричную 17
	
	short X_neg = -(9 + n); 
	// Ручной перевод
	// -23 в двоичном 1000000000010111
	// 1000000000010111 - пк
	// 1111111111101000 - ок
	// 1111111111101001 - дк
	// 1111111111101001 - FFE9 в шестнадцатеричном
	
	//10) Переменные типа short(Максимальное и минимальное)
	short max_short = 0x7FFF;  // десятичное значение 32767
	short min_short = 0x8000;  // десятичное значение -32768
	
	//11) Переменны типа unsigned short
	unsigned short max_unsign_short = 0xFFFF;  // десятичное значение 65535
	unsigned short min_unsign_short = 0x0;   // десятичное значение 0
	
	//12) Переменные типа int
	int Y_pos = 10 + n; 
	// Ручной перевод:
	// 24 в двоичном представлении 11000
	// 000110000 в шестнадцетеричную 18

	int Y_neg = -(10 + n); 
	// Ручной перевод:
	//-24 в двоичном 1000000000011000
	// 1000000000011000 - пк
	// 1111111111100111 - ок
	// 1111111111101000 - дк
	// 1111111111101000 в шестнадцетеричную FFE8
	
	// 13) Максимальное и минимальное число типа int
	int max_int = 0x7FFFFFFF; //в десятичной сс 2147483647
	int min_int = 0x80000000; // в десятичной сс -2147483648

	// 14) Максимальное и минимальное число типа unsigned int
	int max_unsign_int = 0xFFFFFFFF; // в десятичной сс 4294967295
	int min_unsign_int = 0x0; // в десятичной сс 0
	
	// 15) Объявление переменных типа long
	long Z_pos = 11 + n;
	long Z_neg = -(11 + n);
	
	// 16)максимальное и минимальное значения типа long
	long max_long = 0x7FFFFFFF; //в десятичной сс 2147483647
	long min_long = 0x80000000; // в десятичной сс -2147483648
	
	// 17) Максимальное и минимальное значение типа unsigned long
	unsigned long max_unsign_long = 0xFFFFFFFF; // в десятичной сс 4294967295
	unsigned long min_unsign_long = 0x0; // в десятичной сс 0
	
	// 18) Переменные типа float
	float S_pos = 1.0 + n;
	// Ручной перевод:
    // 15.0 = 1111
    // 1,111 exp = 3
	// 3 +127 = 130
	// exp в двоичную 10000010
	// 0.10000010.11100000
	
	float S_neg = -(1.0 + n);

	//19) 
	float absolute_zero = 0.0;
	float inf_pos = 1.0 / absolute_zero;
	float inf_neg = -1.0 / absolute_zero;
	float ind = 0.0 / absolute_zero;
	
	//20 Указатели
	char* pointchar = &sec_let_eng;
	wchar_t* pointwchar = &first_let_eng;
	short* pointshort = &X_pos;
	int* pointint = &Y_pos;
	float* pointfloat = &S_pos;
	
	// 21)
	
	f = sum;
	int x = f(2, 3);
	vi "Sum ="; nw vi x; nl nl nl
	f = sub;
	int y = f(2, 3);
	vi "Sub ="; nw vi y; nl nl nl

	int l1 = sizeof(wchar_t*);

	vi l1; nl nl nl

	system("pause");
	ret 0;
}