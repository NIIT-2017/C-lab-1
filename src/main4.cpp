#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"task4.h"

int main()
{
	int feet;
	int inches;

	printf("Enter your height in foots and in inches (FOOTS'INCHES):\n");

	while ((scanf("%d ' %d", &feet, &inches) == 0) || (feet < 0) || (inches < 0))
	{
		printf("Uncorrect data!\n");
		while (getchar() != '\n');
		printf("Enter your CORRECT  height in foots and in inches (FOOTS'INCHES):\n");
	}
		
	printf("%.1f\n", convert(feet, inches));
	return 0;
}