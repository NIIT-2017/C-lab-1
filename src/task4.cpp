/*Написать программу, которая переводит рост из американской системы (футы, дюймы) в европейскую (сантиметры). Данные
вводятся в виде двух целых чисел, выводятся в виде вещественного числа с точностью до 1 знака. 1 фут = 12 дюймов. 1 дюйм = 2.54см. */

#include "task4.h"
#include <stdio.h>

float convert(int feet, int inches)
{
	if (feet < 0 || inches < 0) 
		printf("zanovo, cosoruky)\n");
	else
	{
		double ep = (((feet * 12) + inches) * 2.54);
		return ep;
	}
}