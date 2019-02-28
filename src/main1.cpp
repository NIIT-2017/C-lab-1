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
	if (t == 0) 
        printf("Norma\n");
	if (t == 1) 
        printf("Overweight\n");
	if (t == -1) 
        printf("Low weight\n");
	return 0;
}