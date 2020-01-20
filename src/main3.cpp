#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char Buf[10] = { '0' };
	char Type = ' ';
	double Angle;// = 0;
	printf("Enter the angle in degrees or radians: 00.00R vs 00.00D\n");
	scanf("%lf %c", &Angle, &Type);
	if ((Type != 'R') && (Type != 'D'))
		{
			printf("Unknown value.\n");
			return -1;
		}
	else
		{
			convert(Buf, Angle, Type);
			printf("%3.2lf%c = %s\n", Angle, Type, Buf);
		}
	return 0;
}