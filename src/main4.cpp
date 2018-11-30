#include <stdio.h>
#include "task4.h"

int main()
{
	int feet;
	int inches;
	printf("Hello! Enter your height using feet and inches. For example: 5'11\n");
	scanf("%d'%d", &feet, &inches);

	printf("Your height in Europe is: %f", convert(feet, inches));
	printf(" cm");
	return 0;
}