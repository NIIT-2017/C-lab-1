#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include "stdio.h"


char* convert(char buf[], double angle, char type)
{ 
	buf[10];
	char a = 0;
	char R=0, D=0;
	if (type == 'R'|| type == 'r') {
		sprintf(buf, "%.5f%c\n", (angle * 180 / 3.14159), 'D');
	}

	if (type == 'D'||type == 'd') {
		sprintf(buf, "%.5f%c\n", (angle * 3.14159 / 180), 'R');	
	}
	return buf;
}