#define _CRT_SECURE_NO_WARNINGS

#include "task2.h"
#include <stdio.h>


int main()
{
	int hour = 0;
	int min = 0;
	int sec = 0;
	printf("What is time? Example 13:13:13\n");
	scanf("%i:%i:%i", &hour, &min, &sec);
	printf("%s\n", greet(hour, min));
	return 0;
}


