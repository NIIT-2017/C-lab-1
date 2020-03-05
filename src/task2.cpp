#include "task2.h"


const char * greet(int hour, int min)
{
	    if ((hour > 00 && hour <= 24) && (min > 00 && min < 60))
			//проверяем правильность ввода, задаём ограничивающий диапазон ввода данных
				{
		if (hour >= 00 && hour <= 06) 
		return("Good night!"); 

		else if (hour >= 06 && hour <= 11) 
		return("Good morning!"); 

	    else if (hour >= 11 && hour <= 18) 
		return("Good day!"); 

		else if (hour >= 18 && hour < 24) 
		return("Good evening!"); 
		}
		return("Uncorrect time!");

	return 0;
}

