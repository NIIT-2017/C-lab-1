#include <stdio.h>
#include "task3.h"


int main()
{
	char buf[100];
	double angle;
	char type;
	printf("press num(D) for degree or num(R) for radian\n");
	scanf("%lf%c", &angle, &type);
	printf(convert(buf, angle, type));
	return 0;
}
