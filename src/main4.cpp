#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main()
{
	int feet, inches;
	printf("Please, enter your height as following X'XX\n");
	scanf("%d'%d", &feet, &inches);
	printf("In the Western world your height would be: %.2f\a", convert(feet, inches));

	return 0;
}