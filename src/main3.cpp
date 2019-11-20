 #include <stdio.h>
#include "task3.h"

int main()
{

	double angle = 0;
	char type = 0;
	char buf[256];
	//scanf( "%lf", );
	int result = scanf("%lf%c", &angle, &type);
	if (result == 0 || type != 'R' && type != 'D')
	{
		printf("Uncorrect value!\n");
		return 1;
	}

	printf(convert(buf, angle, type));
	
	return 0;
}