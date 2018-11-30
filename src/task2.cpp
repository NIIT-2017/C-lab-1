#include <stdio.h>

const char * greet(int hour, int min, int sec)
{
	while (1)
	{
		printf("Hello! Press enter your correct local time (HH:MM:SS)\n");
		scanf("%d:%d:%d", &hour, &min, &sec);
		if (hour >= 0 && hour < 24 && min >= 0 && min < 60 && sec >= 0 && sec < 60)
			break;
	}

		if (hour >= 0 && hour < 6)
			return("Good night!");
		else if (hour >= 6 && hour < 11)
			return("Good morning!");
		else if (hour >= 11 && hour < 18)
			return("Good day!");
		else
			return("Good evening!");

}