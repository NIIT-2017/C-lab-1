#include<stdio.h>

int getRecommendation(char gender, float height, float weight)
{
	int difference;
	
	if (gender == 'm')
		difference = (height - 100);
	else 
		difference = (height - 110);
	
	if (weight > difference)
		return 1;
	else if (weight < difference)
		return -1;
	else
		return 0;

		}