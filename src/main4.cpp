#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>



int main()
{
	int feet = 0, inches = 0;
	char symbol = 0;
	

	printf("Enter height(feet'inches): \n");
	scanf("%d%c%d", &feet, &symbol, &inches);
	printf("%d\n", feet);
	printf("%d\n", inches);
	
	double res = convert(feet, inches);

	printf("%.1f\n", res);

	return 0;



}