#include <stdio.h>
#include "task2.h"

int main()
{
	int hour=0, min=0, sec=0;
		printf("what time is it? hh:mm:ss\n");
		scanf("%d:%d:%d", &hour, &min, &sec);
		puts(greet(hour, min));
		return 0;

}