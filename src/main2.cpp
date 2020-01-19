#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hour = 0, min = 0;

		printf("Enter time\n hour and min\n");
		scanf("%d %d", &hour, &min);
		printf("%s", greet (hour, min));

		return 0;
}