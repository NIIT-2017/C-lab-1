#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>

int main() 
    {
       int hour = 0; 
        int min = 0;
        int sec = 0;
	        printf("Please, enter the time: HH:MM:SS ");
	        scanf("%d:%d:%d", &hour, &min, &sec);
	printf("Enter your time 'hh:mm'");
	scanf("%d:%d", &hour, &min);
	printf(greet(hour, min));
	return 0;
    }
