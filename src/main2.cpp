#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
int main2() 
{
	int hour, min, sec;
	//char wel;
	printf("Write time hh:mm:ss  -  ");
	scanf("%d:%d:%d", &hour, &min, &sec);
	printf("%s", greet(hour, min));
	return 0;
}

