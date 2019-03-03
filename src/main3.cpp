#include <stdio.h>
#include "task3.h"

int main()
{
	char type;
	float angle;
	char buf[30];

	printf("Enter angle for example 45.00d or 45.00r:");
	scanf("%f%c", &angle, &type);
	printf(convert(buf, angle, type));

	return 0;

}
