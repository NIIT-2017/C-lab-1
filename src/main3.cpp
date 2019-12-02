#include "task3.h"
#include <stdio.h>


int main()
{
	double angle = 0, result = 0;
	char type = 0;
	
	printf("Enter a value and measuaring type (D or R)  ");
	scanf("%lf%c", &angle, &type);
	
	char buf[100];
	
	printf(convert(buf, angle, type));
	
	return 0;
}