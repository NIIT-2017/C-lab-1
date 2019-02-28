#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 int main()
{
	char buf[30], type;
	float angle;
	printf("Enter data(format 45.00D): ");
	scanf("%f%c", &angle, &type);
	printf(convert(buf, angle, type));
	return 0;
} 