#include <stdio.h>
#include "task4.h"

int main()
{
	int feet = 0;
	int inches = 0;
	int result = scanf("%d'%d", &feet, &inches);
	if (result == 0)
	{
		printf("Uncorrect value!\n");
		return 1;
	}
	printf("%.1f", convert(feet, inches));
	return 0;
}