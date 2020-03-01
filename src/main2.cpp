#include <stdio.h>
#include "task2.h"

int main()

{
	int hour;
	int min;

	printf("please, enter a time (HH:MM:SS): ");
	scanf("%02d:%02d:", &hour,&min);

	printf(greet(hour, min));

	return 0;
}