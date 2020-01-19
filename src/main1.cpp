#include "task1.h"
#include <stdio.h>

int main() {

    char gender;
    float weight;
    float height;
    printf("Вы мужчина или женщина? (введите m или w) \n");
    scanf("%s", &gender);
    if (gender == 'm') {
        printf(" Отлично вы мужчина.\n");

    } else if (gender == 'w') {
        printf("Отлично вы женщина.\n");
    } else {
        printf("Вы ввели некоректные данные. Выход из программы. ");
        return 1;
    }
    printf("\nВведите Ваш рост в сантиметрах.\n");
    scanf(" %f", &height);
    printf("Введите Ваш вес в килограммах.\n");
    scanf(" %f", &weight);

    int result = getRecommendation(gender,height,weight);

    if (result == -1)
    {
        printf(" Вес недостаточен.");
    }
     else if (result == 0)
    {
        printf("Вес идеален ");
    }
    else
    {
        printf("Вес избыточен");
    }
    return 0;
}