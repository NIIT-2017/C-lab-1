#include <stdio.h>

const char * greet(int hour, int min)
{
	if (hour >= 24 || min >= 60)
	{
		return "Uncorrect time!";
	}
	else if (hour >= 0 && hour < 6)
		return "Good night!";
	else if (hour >= 6 && hour < 12)
		return "Good morning!";
	else if (hour >= 12 && hour < 18)
		return "Good day!";
	else if (hour >= 18 && hour <= 23)
		return "Good evening!";
}


