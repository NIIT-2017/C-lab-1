#include "task2.h"
#include <stdio.h>

const char* greet(int hour, int min)
{
	int hHour = 0;
	if ((hour >= 0) && (hour < 6))
		hHour = 1;
	else
		if ((hour >= 6) && (hour < 11))
			hHour = 2;
		else
			if ((hour >= 11) && (hour < 18))
				hHour = 3;
			else 
				if ((hour >= 18) && (hour < 24))
					hHour = 4;
	switch (hHour)
	{
		case 1:
			return "Good night!";
		case 2:
			return "Good morning!";
		case 3:
			return "Good day!";
		case 4:
			return "Good evening!";
		default:
			return "Uncorrect time!";
	}
}