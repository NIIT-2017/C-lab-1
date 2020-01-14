#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hour=0;
	int min=0;
	int sec=0;
	printf("vvedite vremya v formate HH:MM:SS\n");
	scanf("%d:%d:%d", &hour, &min, &sec);

	printf (greet(hour, min));

	return 0;
}