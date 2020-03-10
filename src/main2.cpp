#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"

int main()
{
	int hour = 0, min = 0, sec = 0;
	printf("Enter the time in the format hh:mm:ss?\n");
	scanf("%d%d%d", &hour, &min, &sec);
	if (hour >= 0 && hour <= 24 && min >= 0 && min <= 60 && sec >= 0 && sec <= 60)
		printf(greet(hour, min));
	else
		printf("incorrect time!");
	return 0;
}