#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include "stdio.h"

int main()
{
	int feet = 0, inches = 0;
	printf("Enter height in feet and inches in format: feet'inch\n");
	scanf("%d %d", &feet, &inches);
	if (((feet < 0) || (feet > 10)) || ((inches < 0) || (inches > 100))) {
		printf("Incorrect growth introduced");
	}
	else {
		printf("Height in centimeters: %.1f",convert(feet, inches));
	}
}
