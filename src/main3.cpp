#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"task3.h"

int main()
{
	char buf[10] = { 0 };
	double ange;
	char type;

	printf("Enter degrees for translation in radians \nor "
		"radians for translation in degrees.\n"
		"And specify type 'D' or 'R'(sample:3.14159R):\n");
	
	while ((scanf("%lf %c", &ange, &type) != 2) //This cycle for give correct data.
		|| (type != 'D') && (type != 'R'))
	{
		printf("%f %c\n", ange, type);
		printf("Uncorrect data!\n"
			"Also enter data(sample:3.14159R):\n");
		while (getchar() != '\n')
			continue;
	}
	printf("%s", convert(buf, ange, type)); //It's a call of function for take result of analysis.
	return 0;
}