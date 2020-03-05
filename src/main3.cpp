#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

int main()
{
	char buf[10] = { '0 ' };
	double angle = 0;
	char type = '0';
	printf("Enter the value of the angle in RAD or GRAD (example - 45.00D or 45.00R):\n");
	scanf("%lf%c", &angle, &type);
	if (((type != 'R') && (type != 'D')) || (angle < 0))
		printf("Uncorrect information");
	else
		printf(convert(buf, angle, type));
	return 0;
}