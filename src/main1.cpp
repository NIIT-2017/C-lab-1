#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "task1.h"

void clean_stdin(void)
{
	int c = 0;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

int main()
{setlocale(LC_ALL, "Rus");

char gender = 'm';
float height = 0;
float weight = 0;

	while (1)
	{
		printf("Enter 'm' or 'w': ");
		scanf("%c", &gender);
		if (gender != 109 && gender != 119)//защита от дурака
		{
			printf("Gender is incorrect!\n");
			clean_stdin();
		}
		else
			break;
	}

	while(1)
	{
		printf("Enter your height: ");
		scanf("%f", &height);
		if (height < 140 || height > 250)// )//защита от дурака
		{
			printf("Height is incorrect!\n");
			clean_stdin();
		}
		else
			break;
	}

	while (1)
	{
		printf("Enter your weight: ");
		scanf("%f", &weight);
		if (weight < 30 || weight > 200)// )//защита от дурака
		{
			printf("weight is incorrect!\n");
			clean_stdin();
		}
		else
			break;
	}

	getRecommendation(gender, height, weight);
	if (getRecommendation(gender, height, weight) == 0)
		printf("Nice! Your weight is perfect!");
	else if (getRecommendation(gender, height, weight) == 1)
		printf("Sorry but you are fat. You should eat less.");
	else if (getRecommendation(gender, height, weight) == -1)
		printf("You are too thin. You should eat more!");

	

	getchar();
	getchar();
	return 0;
}