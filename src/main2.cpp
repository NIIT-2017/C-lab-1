#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hour=100;
	int min=100;
	int sec=100;
	printf("Enter time (HH:MM:SS)\n");
	scanf("%d:%d:%d", &hour, &min, &sec);
	if (hour>=0&&hour<24&&min>=0&&min<60&&sec>=0&&sec<60)
		printf (greet(hour, min));
	else
		printf("uncorrect time!\n");


	return 0;
}