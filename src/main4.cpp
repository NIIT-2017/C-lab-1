#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>

int main()
{

	int feet = 0;
	int inches = 0;

	printf("Enter your height in feet and inches (example - 5'11):\n");
	scanf("%d'%d", &feet, &inches);

	if (feet < 0)
	{
		printf("Uncorrect information");
	}
	else
	{
		printf("your height = %.2f cm", convert(feet, inches));
	}

	return 0;

}