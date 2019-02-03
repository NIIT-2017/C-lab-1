#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 256
#include "task3.h"



int main()
{
	char buf[N];
	double angle = 0;
	char type;
	printf("Enter a value of angle either in Pi radians X.XXXXXR or in degrees X.XXXXXD to convert it vice versa:\n");
-	scanf("%lf%c", &angle, &type);
	printf("%s\n", convert(buf,angle,type));
	return 0;
} 