#include "task3.h"
#include <stdio.h>
#include <iostream>
#include <Windows.h>

char* convert(char buf[], double angle, char type)
{
	SetConsoleCP(1251);		// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251);	// установка кодовой страницы win-cp 1251 в поток вывода
	float constK = 57.2958f;
	float result = 0;
		if (type == 'd' && angle<360)
		{
			result = angle / constK;
			type = 'r';
		}
			else if (type == 'r' && angle < 360)
			{
				result = angle * constK;
				type = 'd';
			}
				else 
				{
					printf("Ќеверно задано входное значение угла\n");
					return 0;
				}
	 snprintf(buf, 100, "%f", result);
    return buf;
} 