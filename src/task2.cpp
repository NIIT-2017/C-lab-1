#include "task2.h"
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

const char* greet(int hour, int min)
{
	if ((hour >= 0 && hour <6) && (min >= 0 && min < 59))

	{
		return "Good night!";
	}

	else if ((hour >= 6 && hour <11) && (min >= 0 && min < 59))

	{
		return "Good morning!";
	}

	else if ((hour >= 11 && hour <18) && (min >= 0 && min < 59))

	{
		return "Good day!";
	}

	else if ((hour >= 18 && hour <= 23) && (min >= 0 && min < 59))

	{
		return "Good evening!";
	}


	else
		return "Uncorrect time\n";

	return 0;


	/*
	if (hour >= 0 && hour < 6)

	{
	printf_s("Good night!\n");
	return 1;
	}

	else if (hour >= 6 && hour < 11)

	{
	printf_s("Good morning!\n");
	return 1;
	}

	else if (hour >= 11 && hour < 18)

	{
	printf_s("Good day!\n");
	return 1;
	}

	else if (hour >= 18 && hour <= 23)

	{

	printf_s("Good evening!\n");
	return 1;
	}

	else if ( min >= 0 && min < 59)

	{
	return 0;
	}

	else
	printf_s("Uncorrect time\n");

	return 0;*/

}