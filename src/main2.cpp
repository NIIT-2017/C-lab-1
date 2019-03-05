#include<stdio.h>
#include"task2.h"

int main()
{
	int hour=0, min=0;
	printf("Enter the time hh:mm");
	scanf("%d, %d", &hour, &min);
	printf("%s", greet(hour, min));
	return 0;
}
