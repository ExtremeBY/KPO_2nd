// SE_Lab02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Macros.h"

// Объявление функций
int add(int a, int b) {
    return a + b;
}

double multiply(double a, double b) {
    return a * b;
}

// Объявление указателей на функции
int (*pAdd)(int, int) = add;
double (*pMultiply)(double, double) = multiply;

int main()
{
    int n = 0; // 69 6E 74 20 6E 20 3D 20 30
    int X = 9 + n; // 69 6E 74 20 58 20 3D 20 39 20 2B 20 6E
    int Y = 10 + n; // 69 6E 74 20 59 20 3D 20 31 30 20 2B 20 6E
    int Z = 11 + n; // 69 6E 74 20 5A 20 3D 20 31 31 20 2B 20 6E
    float S = 1.0 + n; // 64 6F 75 62 6C 65 20 53 20 3D 20 31 2E 30 20 2B 20 6E
    
    bool fal = false; // 62 6F 6F 6C 20 66 61 6C 20 3D 20 66 61 6C 73 65
    bool tr = true; // 62 6F 6F 6C 20 74 72 20 3D 20 74 72 75 65
    
    char sec_let_eng = 'r'; // 73 65 63 5F 6C 65 74 5F 65 6E 67 20 3D 20 27 72 27 
    char sec_let_rus = 'р'; // 63 68 61 72 20 73 65 63 5F 6C 65 74 5F 72 75 73 20 3D 27 D1 80 27
    
    wchar_t first_let_eng = 'G'; // 
    wchar_t first_let_rus = 'Г'; // 

    short pos_x = X; // 9
    short neg_x = -X; // fff7

    short max = 0x7FFF; // 32767
    short min = 0xFFFF8000; // -32768

    unsigned short max_uns_short = 0xFFFF; // 65535
    unsigned short min_uns_short = 0x0; // 0

    int pos_y = Y; // A
    int neg_y = -Y; // fffffff6

    int max_int = 0x7FFFFFFF; // 2 147 483 647
    int min_int = 0x80000000; // -2 147 483 648

    unsigned int max_uns_int = 0xFFFFFFFF; // 4 294 967 295
    unsigned int min_uns_int = 0x0; // 0

    long pos_z = Z; // 0x0000000B
    long neg_z = -Z; // 0xFFFFFFF5

    long max_long = 0x7FFFFFF; // 2 147 483 647
    long min_long = 0x8000000; // -2 147 483 648

    unsigned long max_uns_long = 0xFFFFFFFF; // 4 294 967 295
    unsigned long min_uns_long = 0x0; // 0

    float pos_s = S; // 1.000
    float neg_s = -S; // -1.000

    double positive_infinity = numeric_limits<double>::infinity(); // inf
    double negative_infinity = -numeric_limits<double>::infinity(); // -inf
    double ind = numeric_limits<double>::quiet_NaN(); // nan
    vi positive_infinity; nl
    vi negative_infinity; nl
    vi ind; nl nl nl

    char* pChar = &sec_let_eng; // 0x000000ae150ff084
    wchar_t* pWChar = &first_let_eng; // 0x000000ae150ff0c4
    short* pShort = &pos_x; // 0x000000ae150ff104 {0x0009}
    float* pFloat = &pos_s; // 0x000000ae150ff344 {1.00000000}
    double* pDouble = &positive_infinity; // 0x000000ae150ff388 {inf}
    
    int sum = pAdd(X, Y);
    double product = pMultiply(S, positive_infinity);
    vi sum; nl
    vi product; nl nl nl

    vi "Hello World!"; nl
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
