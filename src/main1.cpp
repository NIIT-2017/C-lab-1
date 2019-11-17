#include "task1.h"
#include <stdio.h>
#include <Windows.h>


int main()

{
	SetConsoleCP(1251);		// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251);	// установка кодовой страницы win-cp 1251 в поток вывода
    char gender = 'g';
    float height = 0;
    float weight = 0;
    printf("Укажите Ваш гендер q-мужчина w-женщина e-иное\n");
    scanf("%c", &gender);
    printf("Укажите Ваш рост в см:\n");
    scanf("%f", &height);
    printf("Укажите Ваш вес в кг:\n");
    scanf("%f", &weight);
    int recommendation = getRecommendation(gender, height, weight);
    switch (recommendation)
    {
        case 1:
            printf("Ваш вес избыточен\n");
            break;
        case -1:
            printf("Ваш вес недостаточен\n");
            break;
        case 0:
            printf("Ваш вес идеален\n");
    }
    return 0;
} 