#include <stdio.h>
#include "task2.h"

int main()
{
	unsigned int hour, min;

	printf("How much time now (hh:mm:ss)? ");
	scanf("%u:%u", &hour, &min);

	printf("%s", greet(hour, min));
	return 0;
}