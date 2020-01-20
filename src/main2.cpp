#include "task2.h"
#include<stdio.h>

int main()

{
	int hour = 0, min = 0, sec = 0;
	printf("Please, Enter your time!\n"
		"Enter Hour!\n");
	scanf("%02d", &hour);
	printf("Enter the minutes!\n");
	scanf("%02d", &min);
	printf("Enter the seconds!\n");
	scanf("%02d", &sec);
	printf(greet(hour, min));
	return 0;
}