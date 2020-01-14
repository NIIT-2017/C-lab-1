#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char *convert(char buf[], double angle, char type)
{
	if (type=='d'||type=='D')
	{
		angle=angle*0.0175;
		sprintf(buf, "%lf %c", angle, 'R');		
	}
	else if (type=='r'||type=='R')
	{
		angle=angle/0.0175;
		sprintf(buf, "%lf %c", angle, 'D');		
	}
	else
		sprintf(buf, "%s", "syntax error");	


	return buf;

}