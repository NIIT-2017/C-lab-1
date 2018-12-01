#include <stdio.h>
#include "task1.h"

int main()
{
	char gender=0;
	float height = 0;
	float weight = 0;
	printf("Enter your gender 'm' or 'w': ");
	scanf("%c", &gender);
	printf("Enter your height: ");
	scanf("%f", &height);
	printf("Enter your weight in kg: ");
	scanf("%f", &weight);

	/*Выводим результат в зависимости от условия*/

	int result = getRecomendation(gender, height, weight);		
		if (result == 1)
			printf("You need a diet!\n");
		if (result == 0)
			printf("Your weight is normal!\n");
		if (result == -1)
			printf("You need to eat more!\n");

	return 0;
}