#include "task1.h"
#include <stdio.h>
int main()
{
	char p = 0;
	float r = 0,v = 0;
	printf("Hello, please choise your gender, enter 'm' or 'w'\n");
	p = getchar();
	printf("Enter you height in sm\n");
	scanf("%f",&r);
	printf("Enter you weight in kg\n");
	scanf("%f",&v);
	int result = getRecommendation(p,r,v);
	if (result == 0)
		printf("You weight is normal\n");
	else if (result == 1)
		printf("You have to lose you weight\n");
	else if (result == -1)
		printf("You can go to the MACDonalds\n");
	return 0;
}