#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[30] = { 0 };
	float angle = 0;
	char type = 0;

	printf("Enter angle and type (180.0D): ");
	scanf("%f%c", &angle, &type);

	printf(convert(buf, angle, type));
	return 0;
}