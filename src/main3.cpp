#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main ()
{
		// Не получается никак чтобы angle был как double
		float angle = 0.0;
		char type = '0';
		char buf[10] = { 0 };

	
		printf("Enter:\n");
		scanf("%f%c", &angle, &type);


		if ('R' == type || 'D' == type)
			
			convert(buf, angle, type);
		else
			printf("Uncorrect data\n");

		
		getchar();
	
	return 0;
	
}