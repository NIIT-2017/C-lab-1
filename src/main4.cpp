#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>

int main()
{
	int feet = 0;
	int inches = 0;
	printf("Enter your height in feet and inches (in format feet'inches)\n");
	scanf("%d'%d", &feet, &inches);
	if (feet <= 0 && inches <= 0)
	{
		printf("You are wrong!\n");
		return 1;
	}
	else if (feet < 0 || inches < 0)
	{
		printf("You are wrong!\n");
		return 1;
	}

	float convert(int feet, int inches);
	float result = convert(feet, inches);

	printf(" Your hight in sm - %.1f \n", result);

	return  0;
}