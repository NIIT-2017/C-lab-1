#include <stdio.h>
#include "task4.h"

int main()
{
	int feet = 0;
	int inches = 0;
	printf("Enter your height (for example 5'11): ");
	scanf("%d'%d", &feet, &inches);

	printf("Your height is %.2f cm", convert(feet, inches));

	return 0;
}