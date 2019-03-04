#include <stdio.h>
#include "Task3.h"

int main()
{
	char buf[20]; float angle; char type;
	printf("Hillo, enter angle, D/R:");
	scanf("%f%c", &angle, &type);
	printf("%s", convert(buf, angle, type));
	return 0;
}