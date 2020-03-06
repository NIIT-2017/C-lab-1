#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main()
{
	int feet = 0, inches = 0;
	printf("Enter your height in feet and inches?\n");
	scanf("%d %d", &feet, &inches);
	if (((feet < 0) || (feet > 10)) || ((inches < 0) || (inches > 100)))
		printf("Incorrect value!");
	else
		printf("Your height in centimeters is %.1f", convert(feet, inches));
	return 0;
}