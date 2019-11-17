#include "task2.h"
#include <stdio.h>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int hour = 0;
    int min = 0;
    int sec = 0;
    printf("Напишите текущее время в формате ЧЧ:ММ:СС\n");
    scanf("%i:%i:%i", &hour, &min, &sec);
    printf("%s\n", greet(hour, min));
    return 0;
}