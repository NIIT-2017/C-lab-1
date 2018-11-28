#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "task4.h"

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

int feet = 0;
int inches = 0;

while (1)
{
	printf("Enter your height: feet and inches.\n");
	int result = scanf("%d%d", &feet, &inches);
	if (result <2 || feet < 3 || feet >8 || inches < 0 || inches > 11)// )//защита от дурака
	{
		printf("Height is incorrect!\n");
		clean_stdin();
	}
	else
		break;
}

convert(feet, inches);
printf("Your height is %.1f centimeters", convert(feet, inches));

getchar();
getchar();
return 0;
}