#include <stdio.h>

static const float pi = 3.141592653, num=180;

char * convert(char buf[], double angle, char type)
{
	double a = angle, b=0;
	char t = type, bu=buf[100];
	if (t=='D')
	{
		b=a*(pi / num);
		sprintf(buf, "%lf, %c", b, 'R');
	}
	else if (t=='R')
	{
		b = a * (num / pi);
		sprintf(buf, "%lf, %c", b, 'D');
	}
	else
	{
		printf("Error");
	}
	return buf;
}