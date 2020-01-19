#include <stdio.h>
#include "task2.h"

int main()
{

	int h = 0, m = 0, s = 0;
	printf("What time is it?\n");
	int result = scanf("%d:%d:%d", &h, &m, &s);
	if (result == 0 || s < 0 || s > 59)
	{
		printf("Uncorrect time!\n");
		return 1;
	}
		
	printf(greet(h, m));
	return 0;
}