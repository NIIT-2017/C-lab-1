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
        printf("Recommend to have a diet");
    } else if (result == -1) {
        printf("Recommend more eat");
    } else if (result == 0) {
        printf ("Your weight is normall");
    } else {
        printf("Your data is not correct");
    }
    return 0;
}


