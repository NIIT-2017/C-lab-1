#include "task1.h"
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    char gender;
    float height = 0;
    float weight = 0;

    printf("Enter your gender(m/w)\n");
    scanf("%c", &gender);

    printf("Enter your height\n");
    scanf("%f", &height);

    printf("Enter your weight\n");
    scanf("%f", &weight);

    int result = getRecommendation(gender, height, weight);
    if (result > 0)
        printf("overweight\n");    //вес превышает
    else if (result < 0)
        printf("underweight\n");   //вес мал
    else
        printf("ideal weight\n");
    return 0;
}
