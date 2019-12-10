#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include "stdio.h"


int main()
{
	char buf[100];
	double angle;
	char type;
	printf("Enter the angle in degrees or radians, 'D' or 'R' ");
	scanf("%lf %c", &angle, &type);
	if (((type != 'R') && (type != 'r') && (type != 'D') && (type != 'd'))||(angle<0)) {
		printf("Incorrect values are entered");
	}
	else printf("%s", convert(buf, angle, type));
	return 0;
}