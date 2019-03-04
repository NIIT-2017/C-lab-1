#include<stdio.h>
#include"Task1.h"

int main()
{
	char gender; float weight, height;
	printf("Hillo, enter your gender (m / w), weight, height:");
	scanf("%c, %f, %f", &gender, &height, &weight);
	printf("%d", getRecommendation(gender, height, weight));
	return 0;
}