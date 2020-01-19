// Clab1 task3

#include "task3.h"
#include <stdio.h>

int main ()
{
	char arr[256];
	double userAngle;
	char userType;

	puts("Enter number for change from degree to radian. Enter number and type 'D' for degree and type 'R' for radian, to get back number!");
	scanf("%lf%c", &userAngle, &userType);

	printf("%s\n", convert(arr, userAngle, userType));

	return 0;
}



