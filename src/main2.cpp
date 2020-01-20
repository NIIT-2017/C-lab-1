#define use_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task2.h"

int main()
{
	printf("Enter time: HH:MM:SS\n");
		
  	int hour = 0, min = 0, sec = 0;
	char colon1 = 0, colon2 = 0;
	
	scanf("%2d %c %2d %c %2d", &hour, &colon1, &min, &colon2, &sec);
	
	if (colon1 == ':' && colon2 == ':')
		printf(greet(hour, min));/* вызов функции название(данные, данные)*/
	else
		printf("Enter CORRECT time: HH:MM:SS\n");
	
	return 0;
}