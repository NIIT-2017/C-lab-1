#include "task2.h"
#include <stdio.h>
int main()
{
	int hour = 0; int min = 0; int sec = 0;
	printf("Please, enter the current  time: HH:MM:SS ");
	scanf("%d:%d:%d", &hour, &min, &sec);
	printf(greet(hour, min));
}