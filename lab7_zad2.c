#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    float x, y;
    char c;

    printf("Калькулятор. Введите выражение, например 5+3 (+ - * / ^): ");
    scanf("%f%c%f", &x, &c, &y);

    switch (c)
    {
    case '+':
        printf("=%f\n", x + y);
        break;
    case '-':
        printf("=%f\n", x - y);
        break;
    case '*':
        printf("=%f\n", x * y);
        break;
    case '/':
        if (y == 0)
            printf("На ноль делить нельзя\n");
        else
            printf("=%f\n", x / y);
        break;
    case '^':   // дополнительный функционал - возведение в степень
        printf("=%f\n", pow(x, y));
        break;
    default:
        printf("Неизвестная операция\n");
    }

    return 0;
}
