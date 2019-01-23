#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	double angel=0;
	char symb=0;
	char buffer[BUFSIZE];
	printf("Enter angle and type:\n ");
	scanf("%lf%c", &angel, &symb);
	char *result = convert(buffer, angel, symb);
	//fun();
	printf("%s\n", result);


	return 0;

}
