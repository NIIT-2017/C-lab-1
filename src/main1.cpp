#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char gender[2];
    char *g = gender;
    float height = 0;
    float weight = 0;
    
    printf("Enter your sex, height, weight: \n");
    scanf("%s %f %f", gender, &height, &weight);
   
    int result = getRecommendation(*g, height, weight);

    if (result == -1)
        printf("Underweight\n");
    else if (result == 1)
        printf("Overweight\n");
    else if (result == 0)
        printf("Ideal weight\n");

    return 0;
}