#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"


int main()
{
    int hour, min, sec;

	printf("Enter hour, min, sec: \n");
	scanf("%d %d %d", &hour, &min, &sec);
	
	if (sec < 0 || sec > 60)
	{
		printf("Uncorrect time\n");
		return 1;
	}
	printf("Time is %d:%d:%d\n", hour, min, sec);
	const char* time = greet (hour, min);
	printf("%s", time);
	return 0;
}
