#include <stdio.h>
#include "task1.h"

int main()

{
	char gender;
	float height = 0;
	float weight = 0;

	printf("please, enter your gender (m or w)\n");
	scanf("%c", &gender);

	if (gender == 'm')

	{
		printf("\ngreat, you're man!\n");
	}
	else if (gender == 'w')
	{
		printf("\nso, you're woman");
    }
	printf("\nenter your height\n");
	scanf("%f", &height);
	printf("\nenter your weight\n");
	scanf("%f", &weight);

	int recommend = getRecommendation(gender, height, weight);

	switch (recommend)
	{
	
		case 1:
	
			printf("\nyour weight is too big! Go to gym!\n");
	     	break;
	
		case -1:
	
		printf("your weight is too small! Find something to eat now!\n");
		break;

		case 0:
	
		printf("your weight is perfect! Congratulations!\n");
	}
	return 0;
}

