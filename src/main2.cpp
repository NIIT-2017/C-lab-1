#include<stdio.h>
#include "task2.h"

int main()
{
	int hour = 0, min = 0, sec = 0;
	printf("Hello! Enter the time (HH:MM:SS):");
	scanf("%d:%d:%d", &hour, &min, &sec);
	
	printf(greet(hour, min));
	return 0;
}