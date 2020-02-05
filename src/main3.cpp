#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"
int main()
{
	char buf[20];
	double angle;
	char type;
	int succes = 0;
	puts("Enter Angle in format 00 D or 00 R");
	
	while (succes == 0)
	{
		scanf("%lf %c", &angle, &type);
		switch (type)
		{
		case 'r':
		case 'R':
		case 'D':
		case 'd':
			printf(convert(buf, angle, type));//запустить функцию конверт и распечатать то что она вернёт.
			succes = 1;
			break;

		default:
			puts("uncorrect - repeat");
            continue;
		}
	}
	
	return 0;
}