#include "task2.h"
#include <stdlib.h>
//#define SIZE 8


const char * greet(int hour, int min)
{
	//char inputtime[SIZE];
	/*char h[2];
	for (int i = 0; inputtime[i] != ':'; i++)
	{
		h[i] = inputtime[i];
	}

	hour = atoi(h);

	char m[2];
	for (int i = 3; inputtime[i] != ':'; i++)
	{
		m[2] = inputtime[i];
	}
	min = atoi(m);*/

	if (hour >= 00 && hour < 06 && min < 60)
		return "Good night!";
	if (hour >= 06 && hour < 11 && min < 60)

		return "Good morning!";

	if (hour >= 11 && hour < 18 && min < 60)
		return "Good day!";
	if (hour >= 18 && hour<24 && min < 60)
		return "Good evening!";
	if (hour > 24 || min >= 60)
		return "Uncorrect time!";
}




