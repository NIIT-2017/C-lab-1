#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>





int main()
{

	int hour, min, sec;
	scanf("%d:%d:%d",&hour, &min, &sec);
	
	printf("%s", greet(hour, min));

	return 0;

}
