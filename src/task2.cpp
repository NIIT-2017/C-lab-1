#include"task2.h"
const char * greet(int hour, int min) //It's a data processing.
{
	if ((hour >= 0 && hour < 6) && (min >= 0 && min < 60))
		return (char*)"Good night!";
	else if ((hour >= 6 && hour < 11) && (min >= 0 && min < 60))
		return (char*)"Good monight!";
	else if ((hour >= 11 && hour < 18) && (min >= 0 && min < 60))
		return (char*)"Good day!";
	else if ((hour >= 18 && hour < 24) && (min >= 0 && min < 60))
		return (char*)"Good evening!";
	else
		return (char*)"Uncorrect time!";
}
