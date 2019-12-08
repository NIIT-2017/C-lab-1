#define _CRT_SECURE_NO_WARNINGS
#include"task3.h"
#include<stdio.h>

char*convert(char buf[], double ange, char type) // I get only correct data and analyze them.
{
	const double PI = 3.14159;
	if (type == 'D')
		sprintf(buf,"%.5f%c\n", ange*(PI / 180), 'R');
	else  //if type == 'R'                          
		sprintf(buf, "%.1f%c\n", ange*(180 / PI), 'D');
	return buf;
}