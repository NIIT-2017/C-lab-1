#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
const char * greet(int hour, int min)
{
	if (hour >= 0 && min >= 0 && hour < 6 && min < 60)	
		return "Good night!";
	else if (hour >= 6 && min >= 0 && hour < 11 && min < 60) 
		return "Good morning!";
	else if (hour >= 11 && min >= 0 && hour < 18 && min < 60) 
		return "Good day!";
	else if (hour >= 18 && min >= 0 && hour < 24 && min < 60) 
		return "Good evening!";
	else return "Uncorrect time!";
}