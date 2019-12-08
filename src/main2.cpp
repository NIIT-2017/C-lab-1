#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"task2.h"

int main()
{
	int hour, min, sec;
	printf("Enter time HH:MM:SS :\n");
	while ((scanf("%d:%d:%d", &hour, &min, &sec) == 0) || !(sec >= 0 && sec<60))
	{                                   //Check of character data and seconds here, because                            
		printf("Uncorrect DATA!\n");   //I can to check in task2 only hours and minutes.
		while (getchar() != '\n')
			continue;
		printf("Enter CORRECT time HH:MM:SS :\n");
	}
	printf("It's at %02d:%02d:%02d!\n", hour, min, sec); //It's a demonstration of a conclusion.
	printf(greet(hour, min));
	return 0;
}

