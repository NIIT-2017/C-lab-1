#include <stdio.h>
#include "task4.h"

int main()
{
	int feet = 0;
	int inches = 0;
	printf("Enter your height(feet'inches): ");
	scanf("%d'%d", &feet, &inches);
	printf("%.2fcm", convert(feet, inches));
	return 0;
}