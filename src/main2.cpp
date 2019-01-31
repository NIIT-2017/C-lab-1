#include "task2.h"
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{


	int hour = 0;
	int min = 0;

	printf_s("Enter hour:");
	scanf_s("%d", &hour);
	printf_s("Enter min:");
	scanf_s("%d", &min);


	printf("%s\n", greet(hour, min));


	return 0;
}