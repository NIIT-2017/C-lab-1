#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include < stdlib.h > 
//#define SIZE 8

int main()
{
	
	int hour, min, sec;
	printf("Enter the time in the format hh:mm:ss\n");
	scanf("%d:%d:%d", &hour, &min, &sec);
	const char *inputtime=greet(hour, min);
	printf("%s\n", inputtime);
	return 0;
}