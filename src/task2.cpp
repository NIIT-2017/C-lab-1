#include "task2.h"

const char* greet(int hour, int min)
{
	const char* str[] = { "Uncorrect time!", "Good night!", "Good morning!", "Good day!", "Good evening!" };
	if ((hour >= 0 && hour < 6) && (min >= 0 && min < 60) )
		return str[1];
	else if ((hour >= 6 && hour < 11) && (min >= 0 && min < 60) )
		return str[2];
	else if ((hour >= 11 && hour < 18) && (min >= 0 && min < 60) )
		return str[3];
	else if ((hour >= 18 && hour <= 23) && (min >= 0 && min < 60) )
		return str[4];
	return str[0];
}
