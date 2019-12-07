#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS //для преодоления ошибки С4996
#include <stdio.h>

int main()
{
	int hour = 0, min = 0; //объявляем переменные

		printf("Enter time\n hour and min\n"); //просим ввести данные
		scanf("%d %d", &hour, &min); //считываем введённые данные
		printf("%s\n", greet (hour, min)); //вывод результата работы функции greet из task2

		return 0;
}
