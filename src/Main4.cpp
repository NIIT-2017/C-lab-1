#include<stdio.h>
#include"Task4.h"

int main()
{
	int feet = 0, inches = 0;
	printf("Enter the feet");
	scanf("%d", &feet);
	printf("Enter the inches");
	scanf("%d", &inches);
	printf("%f", convert(feet, inches));
	return 0;
}