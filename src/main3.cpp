#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"


int main()
{
	char buf[15];
	float angle;
	char type;

	scanf("%f%c", &angle, &type);
	

	printf("%s", convert(buf, angle, type));
}