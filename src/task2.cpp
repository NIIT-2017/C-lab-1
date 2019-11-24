// Clab1 task2

#include "task2.h"

/* "����" - � 00:00 �� 06:00
 "����" - � 06:00 �� 11 : 00
 "����" - � 11 : 00 �� 18 : 00
 "�����" - � 18 : 00 �� 00 : 00*/

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