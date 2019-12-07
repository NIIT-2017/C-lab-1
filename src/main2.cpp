#define _CRT_SECURE_NO_WARNINGS 
#include "task2.h"
#include <stdio.h>

int main()
{
	int hour = 0, min = 0; 

		printf("Enter time hour and min\n"); 
		scanf("%d %d", &hour, &min);
		printf("%s", greet(hour, min)); 

		return 0;
}
