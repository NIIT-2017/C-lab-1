#define _CRT_SECURE_NO_WARNINGS

#include "task3.h"
#include <stdio.h>

int main()
{
	float angle = 0;
	char type = '0';
	char buf[20] = { 0 };
	printf("What is angle? Example 13.13R or 180.0D \n");
	scanf("%f%c", &angle, &type);
	printf("%s\n", convert(buf, angle, type));
	return 0;
}