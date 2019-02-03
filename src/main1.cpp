#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
#include <conio.h>



int main()
{
	char gender;
	float height;
	float weight;
	printf("Please, enter your gender: m or w\n");
	scanf("%c", &gender);
	printf("Please, enter your height: xxx\n");
	scanf("%f", &height);
	printf("Please, enter your weight: xxx.x\n");
	scanf("%f", &weight);
	int GenHeiWeiRel = getRecommendation(gender, height, weight);
	if (GenHeiWeiRel == 0)
		printf("You've got an ideal body shape! Congratulations! You don't need any exercises so far");
	else if (GenHeiWeiRel == 1)
		printf("Yo fat ass, hurry your butt up to the gym! Right now!!!\a");
	else if (GenHeiWeiRel == -1)
		printf("You're gonna vanish if you keep cutting bread & meat outta your diet!");
	else
		printf("You'd better never try again!");
	_getch(); // Я украл этот костыль и не понимаю, честно говоря, принцип его действия.  Без него консоль закрывается в конце.
	return 0;

}