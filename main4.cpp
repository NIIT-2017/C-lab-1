#include "task4.h"
#include <stdio.h>

int main()
{
	int feet, inches;
	printf("Press Feet'Inches\n");
	scanf("%d'%d", &feet, &inches);
	printf("%.2f cm", convert(feet, inches));
}