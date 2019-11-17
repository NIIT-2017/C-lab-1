#include "task3.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>

int main()
{
	SetConsoleCP(1251);		// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251);	// установка кодовой страницы win-cp 1251 в поток вывода
	std::cout << "\n		Џреобразование градусов в радианы и обратнo \n";
	
    float angle = 0;
    char type = '0';
	std::cout << "Укажите значение угла в в формате '__d'- в градусах или '__r'- в радианах: ";
    scanf("%f%c", &angle, &type);
    char buf[100] = { 0 };
    printf("%s\n", convert(buf, angle, type));
    return 0;
} 