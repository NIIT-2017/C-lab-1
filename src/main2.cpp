#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"




int main()
{
	int eHours, eMinutes;
	printf("Please, enter current time in form hh:mm\n");
	scanf("%d:%d", &eHours,&eMinutes );
	printf("%s\a",greet(eHours, eMinutes));
	return 0;		
}
