// Clab1 task4

#include "task4.h"
#include <stdio.h>

int main()
{
	int feet;
	int inches;

	puts("Enter your height in feet and inches for the chage from feet and inches to centimetres. (For example: 17'6)");
	scanf("%d'%d", &feet, &inches);

	printf("%1.2f ", convert(feet, inches));

	return 0;
}
