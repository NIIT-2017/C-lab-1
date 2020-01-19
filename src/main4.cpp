#include "task4.h"
#include <stdio.h>
int main()
{
	int a = 0, d = 0;
	char b = 0;
	printf("Enter your hight in USA system in format 0'0\n");
	scanf("%d%c%d",&a,&b,&d);
	double result = convert(a, d);
	printf("Your hight in sm - ");
	printf("%0.1f\n", result);
	return 0;
}