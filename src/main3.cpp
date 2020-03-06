#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{	char buf[100];
	double angle;
	char type;
	printf("Enter the angle in degrees or radians, 'D' or 'R'\n");
	scanf("%lf %c", &angle, &type);
	if ((type != 'R') && (type != 'r') && (type != 'D') && (type != 'd') || (angle < 0))
		printf("Incorrect value!");
	else printf("%s", convert(buf, angle, type));
	return 0;
}