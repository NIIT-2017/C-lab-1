#define _CRT_SECURE_NO_WARNINGS

#include "task1.h"
#include <stdio.h>

int main()
{
    char gender = 'm';
    float height = 0;
    float weight = 0;
    printf("What is your gender?\n");
    scanf("%c", &gender);
    printf("What is your height?\n");
    scanf("%f", &height);
    printf("What is your weight?\n");
    scanf("%f", &weight);
    int recommendation = getRecommendation(gender, height, weight);
    switch (recommendation)
    {
        case 1:
            printf("You have overweight\n");
            break;
        case -1:
            printf("You have underweight\n");
            break;
        case 0:
            printf("Your weight is well\n");
    }
    return 0;
}