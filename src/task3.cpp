// Clab1 task3

#include "task3.h"

/*Пример: convert(buf, 180.0, 'D') выдает строку: 3.14159R.
Пример: convert(buf, 3.14159, 'R') выдает строку: 180.0D.*/


char* convert(char buf[256], double angle, char type)
{
	double result;
	const double pi = 3.14159;

		if (type == 'D')
	{
		result = angle * pi / 180;
		sprintf(buf, "%f%c", result, 'R');
		return buf;
	}
	
	else if (type == 'R')
	{
		result = angle * 180 / pi;
		sprintf(buf, "%f%c", result, 'D');
		return buf;
	}
}