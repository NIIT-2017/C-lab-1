#include "task1.h"
#include <stdio.h>

int main()
{
	char gender = 0;
	int height = 0;
	int weight = 0;
	int idealweight = 0;
	printf("Insert 'm' if you are men or 'w' if you are women: ");
	scanf("%c", &gender);
	printf("Insert your height in centimeters: ");
	scanf("%d", &height);
	printf("Insert your weight in kilograms: ");
	scanf("%d", &weight);
	int result = getRecommendation(gender, height, weight);
	if (result == 0) printf("Norma\n");
	if (result == 1) printf("Overweight\n");
	if (result == -1) printf("Low weight\n");
	return 0;
}