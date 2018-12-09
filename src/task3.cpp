#include <stdio.h>

char*convert(char buf[], double angle, char type)
{
	const double pi = 3.14159265359;	//задаем константу Пи

	if (type == 'R')					//если ввели в радианах
	{
		angle = angle * 180 / pi;		//то переводим в градусы
		sprintf(buf, "%.1f%c", angle, 'D');
	}
	if (type == 'D')					//если ввели в градусах
	{
		angle = angle * pi / 180;		//то переводим в радианы
		sprintf(buf, "%.5f%c", angle, 'R');
	}
	return buf;
}