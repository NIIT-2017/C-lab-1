#include "task2.h"
#include <stdio.h>
#include <time.h>

const char * greet(int hour, int min)
{
	if ((hour >= 0 && hour <= 5) &&
		(min >= 0 && min <= 59))
		return (char*)"Good night!";
	else if ((hour >= 6 && hour <= 10) &&
		(min >= 0 && min <= 59))
		return (char*)"Good morning!";
	else if ((hour >= 11 && hour <= 17) &&
		(min >= 0 && min <= 59))
		return (char*)"Good day!";
	else if ((hour >= 18 && hour <= 23) &&
		(min >= 0 && min <= 59))
		return (char*)"Good evening!";
	else return (char*)"Uncorrect time!";
	/*return =0; не пишут в возврате к char*/
}