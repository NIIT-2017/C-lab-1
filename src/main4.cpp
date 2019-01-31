#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{

	int feet=0;
	int inches=0;

printf("Enter feet and inches");

	scanf("%d%d", &feet, &inches);

	printf("%.1f\n", convert(feet, inches));

	return 0;
}