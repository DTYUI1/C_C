#include <iostream>
#include <stdlib.h>

using namespace std;
 
int calculate(int op1, int op2, int(*func)(int, int))
{
 return func(op1, op2);
}
 
/* сложение, вычитание, умножение, деление,
остаток, возведение в степень: */
int summ(int op1, int op2) { return op1 + op2; }
int diff(int op1, int op2) { return op1 - op2; }
int mult(int op1, int op2) { return op1 * op2; }
int divd(int op1, int op2) { return op1 / op2; }
int bals(int op1, int op2) { return op1 % op2; }
int powr(int op1, int op2) 
{
 int ret = 1;
 while (op2--) ret *= op1;
 return ret;
}
 
typedef int(*fint_t)(int, int); // fint_t - указатель на функцию
// using fint_t = int(*)(int, int); // fint_t - указатель на функцию
// функции 6-ти арифметических операций
int arr[] = {1, 2, 3, 4 ,5};
fint_t foper[] = // массив указателей на функции
{
 summ, diff, mult, divd, bals, powr
};
 
int main()
{
 //setlocale(LC_ALL, "rus");
 char coper[] = { '+', '-', '*', '/', '%', '^' };
 int noper = sizeof(coper) / sizeof(coper[0]);
 do
 {
    char buf[120];
    char *str = buf;
    char *endptr;
    char oper;
    
    cout << "выражение для вычисления (<op1><знак><op2>): " << flush;
    cin >> buf;
    
    int op1, op2;
    
    op1 = strtod(str, &endptr);
    oper = *endptr++; // * - делает разименование и получает из адреса '+' 
    op2 = strtod(str = endptr, &endptr);
    
    int i;
    for (i = 0; i < noper; i++)
    {
    if (oper == coper[i]) {
    cout << op1 << ' ' << oper << ' ' << op2 << " = "
    << calculate(op1, op2, foper[i]) << endl;
    break;
    }
    }
    if (i == noper)
    cout << "неверный знак операции: " << oper << endl;
 } while (true);
 
 return 0;
}