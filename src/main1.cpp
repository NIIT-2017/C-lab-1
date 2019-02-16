#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>

int main1()
{

	char g = 0;
	float  w = 0, h = 0;
	printf("gender: ");
	scanf("%c", &g);
	printf("height: ");
	scanf("%f", &h);
	printf("weight: ");
	scanf("%f", &w);
	int t = getRecommendation(g,h,w);
	if (t == -1)
	   puts("Your weight is too low\n");
	else if (t == 1)
		puts("You have overweight\n");
	else if (t == 0)
		puts("You are an ideal\n");
	return 0;
}