#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[30];
	double angle = 0;
	char type = 0;

	printf("Enter angle value (for example 180.0D) :");
	scanf("%lf%c", &angle, &type);
	printf(convert(buf, angle, type));

	return 0;
}
