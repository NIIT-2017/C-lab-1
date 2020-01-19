// Clab1 task2

#include "task2.h"
#include <stdio.h>

int main()
{
	int hour = 0;
	int min = 0;

	puts("I want to greet you! Enter please time in hours and minutes!");
	scanf("%d", &hour);
	scanf("%d", &min);

	printf("%s\n", greet(hour, min));

	return 0;
}