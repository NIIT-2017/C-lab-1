#include "task2.h"
#include <stdlib.h>
//#define SIZE 8


const char * greet(int hour, int min)
/*{
	

	if (hour >= 00 && hour < 06 && min < 60)
		return "Good night!";
	if (hour >= 06 && hour < 11 && min < 60)

		return "Good morning!";

	if (hour >= 11 && hour < 18 && min < 60)
		return "Good day!";
	if (hour >= 18 && hour<24 && min < 60)
		return "Good evening!";
	if (hour > 24 || min >= 60)
		return "Uncorrect time";
}*/

{if (hour >= 0 && hour < 6 && min >= 0 && min < 60)
	return "Good night!";
else if (hour >= 6 && hour < 11 && min >= 0 && min < 60)
	return "Good morning!";
else if (hour >= 11 && hour < 18 && min >= 0 && min < 60)
	return "Good day!";
else if (hour >= 18 && hour < 24 && min >= 0 && min < 60)
	return "Good evening!";
else
return "Uncorrect time!";
}





