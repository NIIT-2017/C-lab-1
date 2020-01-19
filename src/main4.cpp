#define _CRT_SECURE_NO_WARNINGS

#include "task4.h"
#include <stdio.h>

int main()
{
	int feet = 0;
	int inches = 0;
	printf("Vbey dyimovj ugolok. foot'inches Example: 6'06 \n");
	scanf("%d'%d", &feet, &inches);
	printf("%.1f\n", convert (feet,inches));
	return 0;
}