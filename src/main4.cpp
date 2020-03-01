#include<stdio.h>
#include"task4.h"

int main()



{
	int feet;
	int inches;

	printf("enter your height in foots and in inches (feets.inches):\n");
	scanf("%d . %d", &feet, &inches);


	printf("%.1fsm\n", convert(feet, inches));

	return 0;
}