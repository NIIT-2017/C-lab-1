#include "task4.h"
#include <stdio.h>


int main()
{
	int feet = 0, iches = 0;
	float result = 0;
	char apo = 0;
	
	printf("Enter height in feet and iches (F'C) ");
	scanf("%d %c %d", &feet, &apo, &iches);
	
	if (apo == '\'')
		printf("%0.1f centimetres", convert(feet, iches));
	
	else 
		printf("Enter correct format");
	return 0;
}