#include "task2.h"
#include <stdio.h>
int main()
{
	char s = 0;
	int a, b;
	printf("Please enter time in format 00:00\n");
	scanf("%02d%c%02d", &a, &s, &b);
	printf(greet(a, b));
	return 0;
}