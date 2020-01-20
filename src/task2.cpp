#include "task2.h"
#include "stdio.h"

const char* greet(int hour, int min)
{
	int sec = 0;
	if (hour >= 24 || hour < 0 || min>60 || min < 0) {
		return "Uncorrect time!";
	}
	else if (hour >= 0 && hour < 6) {
		return "Good night!";
	}
	else if (hour >= 6 && hour < 11) {
		return "Good morning!";
	}
	else if (hour >= 11 && hour < 18) {
		return "Good day!";
    }
	else {
		return "Good evening!";
    }
}	