#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hr = 0;
	int mn = 0;
	int sec = 0;
	printf("Enter current time (HH:MM:SS):\n");
	scanf("%d:%d:%d", &hr, &mn, &sec);
	printf(greet(hr, mn));
	return 0;
}

