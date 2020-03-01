#include "task3.h"
#include <stdio.h>

int main()

{

	float val = 0;
	char conv = 0;
	char buf[256];

	printf("please, enter a value and letter (D - for convert to radians or R - for convert to degrees)\n");

	scanf("%f%c", &val, &conv);

		printf(convert(buf, val, conv));

	return 0;

}