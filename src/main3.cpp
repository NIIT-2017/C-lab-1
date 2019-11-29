#include "task3.h"
#include <stdio.h>
int main()
{
	float a = 0;
	char b = 0;
	char buf[256] = { 0 };
	printf("Please enter your angle in form 00.00D if this angle is gradus and 00.00R if this angle is radian\n");
	scanf("%f%c",&a,&b);
	printf(convert(buf,a,b));
	return 0;
}