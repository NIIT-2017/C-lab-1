
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNING
#include <math.h>
#include <stdio.h>

char* convert(char buf[], double angle, char type)

{
    double result = 0; // переменная результата вычисления (градусы или радианы)

    if (type == 'd' || type == 'D')
    {
        result = (angle * M_PI / 180); // формула вычисления значение радианы
        type = 'R';
    }
    else if (type == 'r' || type == 'R')
    {
        result = (angle * 180 / M_PI); // формула вычисления значение градусов
        type = 'D';
    }

    sprintf (buf, "%f%c", result, type); // вывод значений в массив, указанный аргументом buf
    return buf;

}