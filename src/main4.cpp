#include <stdio.h>
#include "task4.h"
#include <math.h>
 int main(){
 	int feet, inches;
	float	resultf;
 	printf("Write your height (f'd):  \n");
	scanf("%d'%d", &feet, &inches);
	resultf = convert(feet, inches);
 	printf("%.1f", resultf);
 	return 0;
} 

