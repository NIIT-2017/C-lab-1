#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"
int main()
{
	int feet, inches;
	float cm;

	puts("Enter your height");
	scanf("%d %d", &feet, &inches);
	cm = convert(feet, inches);
	printf("%.1f cm\n", cm);
	return 0;
}