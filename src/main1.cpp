#include "task1.h"
#include <stdio.h>


int main()

{
    char gender = 'g';
    float height = 0;
    float weight = 0;
    printf("Specify your gender q-male w-female e-different\n");
    scanf("%c", &gender);
    printf("Please specify your height in cm:\n");
    scanf("%f", &height);
    printf("Enter your weight in kg:\n");
    scanf("%f", &weight);
    int recommendation = getRecommendation(gender, height, weight);
    switch (recommendation)
    {
        case 1:
            printf("Your weight is superfluous\n");
            break;
        case -1:
            printf("Your weight is insufficient\n");
            break;
        case 0:
            printf("Your weight is ideal\n");
    }
    return 0;
} 