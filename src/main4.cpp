#include "task4.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	SetConsoleCP(1251);		// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251);	// установка кодовой страницы win-cp 1251 в поток вывода
	cout << "\n  Преобразование роста дюйм->см  \n";

    int feet = 0;
    int inches = 0;
	cout << "Укажите Ваш рост в дюймах, например 5'11:  \n";
    scanf("%i'%i", &feet, &inches);
	cout << ("%f.1\n", convert(feet, inches));
}