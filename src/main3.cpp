#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

void clean_stdin(void)
{
	int c = 0;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}




int main()
{
	char buf[256];
	double angle = 0;
	char type = 'm';

	while (1)
	{
		printf("Enter numbers of degrees (D) or radians (R)\n");
		scanf("%lf%c", &angle, &type);
		if (type != 68 && type != 82)//защита от дурака.
		{
			printf("Enter is incorrect!\n");
			clean_stdin();
		}
		else
			break;
	}
	
	
	convert(buf, angle, type);
	puts(buf);

	
	getchar();
	getchar();
	return 0;
}


