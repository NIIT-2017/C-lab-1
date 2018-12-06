#include <stdio.h>

const char* greet(int hour, int min)
{
	if (hour >= 0 && hour <= 5)
		return "Good night!";
	else if (hour >= 6 && hour <= 10)
		return "Good morning!";
	else if (hour >= 11 && hour <= 17)
		return "Good day!";
	else if (hour >= 18 && hour <= 23)
		return "Good evening!";
	else
		return "Uncorrect time!";


}