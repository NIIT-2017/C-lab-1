#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main2() 
{
	int hour, min;
	printf("Write time hh:mm: -  ");
	scanf("%d:%d, &hour, &min);
	printf(greet(hour, min));
	return 0;
}

