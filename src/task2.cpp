#include "task2.h"

const char* greet(int hour, int min)
{
	while (hour >= 00 && hour < 24)
	{
		if (hour >= 00 && hour < 06)
			return(char*)"Good night!";
		else if (hour >= 06 && hour < 11)
			return(char*)"Good morning!";
		else if (hour >= 11 && hour < 18)
			return(char*)"Good day!";
		else if (hour >= 18 && hour < 24)
			return(char*)"Good evening!";
	}
	return(char*)"Uncorrect time!";
}