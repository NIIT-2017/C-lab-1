#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "task2.h"

void clean_stdin(void)
{
	int c = 0;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

int main()
{
setlocale(LC_ALL, "Rus");

	int hour = 0;
	int min = 0;
	int sec = 0;

	while (1)
	{
		printf("What time is it?\npress hours, minutes, seconds:\n");
		int result = scanf("%d%d%d", &hour, &min, &sec);
		if (result <3 || hour <0 || hour >23 || min <0 || min >59 || sec <0 || sec > 59)//защита от дурака
		{
			printf("Uncorrect time!\n");
			clean_stdin();
		}
		else
			break;
	}

	printf(greet(hour, min, sec));
	
	getchar();
	getchar();
	return 0;
}