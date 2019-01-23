#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>

int main()
{
	int ft, inches;
	printf("Enter your height(feet ' inches  ):\n");
	scanf("%d'%d", &ft, &inches);

	float growth = convert(ft, inches);
	printf("Your height %.1f cm\n", growth);

	return 0;
}