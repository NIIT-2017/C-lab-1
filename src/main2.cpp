#include <stdio.h>
#include "task2.h"

int main()
{
	int hour = 0;
	int min = 0;
	printf("Enter your time 'hh:mm'");
	scanf("%d:%d", &hour, &min);
	printf(greet(hour, min));
	return 0;
}