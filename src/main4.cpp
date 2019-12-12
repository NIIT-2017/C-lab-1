#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"



int main()
{
	int feet, inches;
	
	
		scanf("%d'%d", &feet, &inches);
		
		printf("%.2f",convert(feet, inches)); 
		return 0;
}