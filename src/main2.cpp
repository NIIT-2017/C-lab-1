#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include "stdio.h"

int main()
{
	int hour = 0, min = 0, sec = 0;
	printf("Enter the time in the format hh:mm:ss\t");
	scanf("%d%d%d", &hour, &min, &sec);
	if (sec > 0 && sec < 60) {
		printf(greet(hour, min));
		printf("%d ", hour);
		printf("%d ", min);
		printf("%d ", sec);
	}
	else printf("Uncorrect time!");
	return 0;
}