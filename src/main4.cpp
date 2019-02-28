#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 int main()
{
 	int feet, inches;
 	printf("Write your height (f'd):  \n");
	scanf("%d'%d", &feet, &inches);
	printf("%.2fcm", convert(feet, inches));
 	return 0;
} 

