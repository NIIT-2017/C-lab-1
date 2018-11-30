#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[50];
	float angle;
	char type;
	printf("Enter the angle using degrees (D) or radian (R). For example: 45.00D \n");

	scanf("%f%c", &angle, &type);
	convert(buf, angle, type);
	
	puts(buf);
	return 0;
}
