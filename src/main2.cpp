#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>

int main()
{
	int hour = 0;
	int min = 0;
	printf("enter hours ");
	scanf("%i", &hour);
	printf("enter minutes ");
	scanf("%i", &min);
	printf("%s", greet(hour, min));
	return 0;
}


