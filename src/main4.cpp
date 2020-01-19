#include "task4.h"
#include <stdio.h>

int main()
{
    int feet = 0, inches = 0; // перемменые футов и дюймов
   
    printf ("Enter your feet and inches: "); // функция вывода сообщения на экран
    scanf ("%d %d", &feet, &inches); // функция ввода футы и дюймы

  
    printf ("Your syntimeters is: %.1f",convert ( feet, inches) ); // вывод значения функции convert и сообщения с текстом

        return 0;

}