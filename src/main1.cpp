#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>



int main()
{
	char gender[10] = { 'm', 'w' };
	float height = 0;
	float weight = 0;
	printf("What is your gender, m or w? Or idiot?\n");
	scanf("%c", &gender);
	printf("What is your height (>100) and weight?\n");
	scanf("%f %f", &height, &weight);
	printf("Hmm, you are %c with height  %fcm  and  weight %fkg! Now I will say:\n", *gender, height, weight);
	int rec = getRecommendation(*gender, height, weight);
	switch (rec)
	{
	case 1:
		printf("You are pork\n");
		break;
	case -1:
		printf("You are pushinka\n");
		break;
	case 0:
		printf("You are norm\n");
	}
	return 0;
}
