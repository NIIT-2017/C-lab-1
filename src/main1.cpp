#include <stdio.h>
#include "task1.h"

int main()
{
    char gender;
    float height = 0;
    float weight = 0;
    printf("Enter your gender('m' or 'w'), height, weight");
    scanf("%c,%f,%f", &gender, &height, &weight);
    if (getRecommendation(gender, height, weight) == -1)
        printf("Your weight is low");
    else if (getRecommendation(gender, height, weight) == 1)
        printf("Your weight is high");
    else if (getRecommendation(gender, height, weight) == 0)
        printf("Your weight is ideal");
    return 0;
    } 
