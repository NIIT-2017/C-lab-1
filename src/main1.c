
#include <stdio.h>
#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{
   
    char gender;
    float weight, height; // в первых двух строчках мы деларируем переменные возраста, веса и роста
    printf("Enter your gender ('m' or 'w').. "); // просим пользователя ввести пераметры и помещаем полученные данные в переменные
    scanf("%c", &gender);
    printf("Enter your weight (in kg).. ");
    scanf("%f", &weight);
    printf("Enter your height (in cm).. ");
    scanf("%f", &height);
    
    int result = getRecommendation (gender, height, weight); // переменная result содержит в себе возвращенное значение функции getRecomendation
    if (result == 1) {
        printf("You should lose your weight\n");
    } else if (result == -1) {
        printf("You should get weight\n");
    } else if (result == 0) {
        printf ("Your weight is normal\n");
    } else {
        printf("Your data is not correct\n");
    }
}

