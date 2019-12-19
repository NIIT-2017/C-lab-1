#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int funt = 0;
	int duim = 0;
	printf("Enter value in feet and inches (feet'inches)\n");
	scanf("%d'%d", &funt, &duim);
	if ((funt <= 0) || (duim < 0))
	{
		printf("Unknow value.\n");
		return -1;
	}
	else
	{
		printf("Value in centimeters = %.1f\n", convert(funt, duim));
	}
	return 0;
}