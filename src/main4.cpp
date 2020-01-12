#define _CRT_SECURE_NO_WARNINGS

#include "task4.h"
#include <stdio.h>
int main()
{
	int feet = 0, inches = 0;
	printf("The program for converting growth from the American system to the European\n\n");
	printf("Enter feet,inches:\0");
	scanf("%d'%d", &feet, &inches);
	printf("Height in cm:%.1f \n", convert(feet, inches));
	return 0;
}