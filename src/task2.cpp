// Clab1 task2

#include "task2.h"

/* "ночь" - с 00:00 до 06:00
 "утро" - с 06:00 до 11 : 00
 "день" - с 11 : 00 до 18 : 00
 "вечер" - с 18 : 00 до 00 : 00*/

const char* greet(int hour, int min)
{
	if (hour >= 0 && hour < 6 && min >= 0 && min <= 59)
	{
		return "Good night!";
	}

	else if (hour >= 6 && hour < 11 && min >= 0 && min <= 59)

	{
		return "Good morning!";
	}

	else if (hour >= 11 && hour < 18 && min >= 0 && min <= 59)

	{
		return "Good day!";
	}

	else if (hour >= 18 && hour <= 23 && min >= 0 && min <= 59)
	{
		return "Good evening!";
	}

	else
		return "Uncorrect time!";
}