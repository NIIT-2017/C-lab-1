#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

int main()
{
	double angle = 0;
	char type = 0;
	char buf[30] = { 0 };

	printf("Input the value of the angle in RAD or GRAD (example - 45.00D or 45.00R):\n");
	scanf("%lf%c", &angle, &type);

	if ((angle < 0) || ((type != 'R') && (type != 'D')))
		printf("You are wrong!");
	else
		printf(convert(buf, angle, type));

	return 0;
}