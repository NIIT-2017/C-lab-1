// Clab1 task1

#include "task1.h"

int getRecommendation(char gender, float height, float weight)
{
	int resultIW;
	int resultHW; 

	// определяем пол 
	if (gender == 'w')
	{
		resultIW = height - 110;
	}
	else if (gender == 'm')
	{
		resultIW = height - 100;
	}
	else 
	{ // если пол неверный возвращаем код ошибки
		return 10;
	}
		
	if (weight < 0 || height < 0)
	{// если вес, рост неверные возвращаем код ошибки
		return 10;
	}

	// определяем итоговое значение
	if (weight < resultIW)
		resultHW = -1;

	else if (weight > resultIW)
		resultHW = 1;
	
	else 
		resultHW = 0;

	return resultHW;
}