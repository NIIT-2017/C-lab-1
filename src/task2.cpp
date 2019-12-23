#include "task2.h"
#include <stdio.h>

const char* greet(int hour, int min)
{
	if (min < 0 || min > 59)
		return (char*)"Uncorrect time!";
	else if (0 <= hour && hour < 6)
		return (char*)"Good night!";
	else if (6 <= hour && hour < 11)
		return (char*)"Good morning!";
	else if (11 <= hour && hour < 18)
		return (char*)"Good day!";
	else if (18 <= hour && hour <24)
		return (char*)"Good evening!";
	else 
		return (char*)"Uncorrect time!";

}