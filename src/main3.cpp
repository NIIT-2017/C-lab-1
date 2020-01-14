#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double angle;
	char type;
	char buf[20]={'0'};
	printf ("vvedite ugol:\n");
	scanf ("%lf %c", &angle, &type);
	//printf ("%lf\n", angle);
	//printf ("%c\n", type);
	convert(buf, angle, type);
	printf("%s\n", buf);
	return 0;
}