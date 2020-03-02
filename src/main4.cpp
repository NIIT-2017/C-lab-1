#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>

int main()
{
	int feet = 0;
	int inches = 0;
	printf("Enter right format (feet'inches): ");
	scanf("%d'%d", &feet, &inches);
	printf("%.2fcm", convert(feet, inches));
	return 0;
} 
