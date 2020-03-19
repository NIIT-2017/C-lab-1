#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[20];
	double angle;
	char type;
	int succes = 0;
	printf("Enter Angle \n");
	printf("Exemple: (45.00D or 03.11R) \n");
	while (succes == 0)
	{
		scanf("%lf %c", &angle, &type);
		switch (type)
		{
		case 'R':
		case 'D':
			printf(convert(buf, angle, type));
			succes = 1;
			break;
		default:
			puts("uncorrect - repeat");
			continue;
		}
	}
	return 0;
}