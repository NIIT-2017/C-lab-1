#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"//подключаем библиотеки
#include<stdio.h>
int main() // объ€вл€ем функцию main
{
	char gender;
	float height, weight;// объ€вл€ем переменные
	printf("enter your gender m or w ");// просим в консоли ввести пол
	scanf("%c",&gender);// ввод данных с клавиатуры и указатель на переменную куда хотим передать вводимое значение

	printf("enter your height ");// тоже что и сверху
	scanf("%f", &height);
	printf("enter your weight ");
	scanf("%f",  &weight);

	printf("your height and weight: %f and %f \n", height, weight); // выводим в консоль значени€ и символ который мы ввели
	printf("Your gender: %c\n", gender);
								//переходим на реализацию функции getRecommendation ...
	int result = getRecommendation(gender, height, weight); // вызываю функцию и передаю в неЄ наши значени€ и записываю результат выполнени€ функций в ресалт
	printf("result: %d", result);
	if (result == 0)// провер€ю услови€ ->
	{
		printf("vas ves idealen\n");// и выводим их в консоль в соответствии с их сравнением
	}
	else if (result == 1)
	{
		printf("vas ves bolshoi\n");
	}
	else
	{
		printf("vas ves mal\n");
	}
	return 0;
}
