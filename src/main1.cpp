//Ќаписать программу, котора€ запрашивает у пользовател€ пол,
//рост и вес, а затем анализирует соотношение роста и веса, выда -
//ва€ рекомендации к дальнейшим действи€м(похудеть, потолстеть,
//норма)

#include<stdio.h>
#include"task1.h"

int main()
{
	char gender;
	float height;
	float weight;
	printf("Enter your gender (m/w): \n");
	scanf("%c", &gender);

	printf("Enter your height (cm): \n");
	scanf("%f", &height);

	printf("Enter your weight (kg): \n");
	scanf("%f", &weight);

	if (getRecommendation(gender, height, weight) == 1)
		printf("Your weight is too high! You must do more excercises \n");
	else if (getRecommendation(gender, height, weight) == -1)
		printf("Your weight is too low! You must eat more \n");
	else 
		printf("Your weight is ideal! You can do nothing \n");
	
	return 0;
}

