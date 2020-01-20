#include "task1.h"
#include <stdio.h>

int main()

{
    char gender = 0;
    float height = 0, weight = 0;

    printf("What your gender (m/w)? \n");
    scanf("%c",&gender);

    if ((gender != 'm') && (gender != 'w'))
    {
        printf("You entered the wrong gender!\n");
        return 0;
    }
    printf("What your height? \n");
    scanf("%f",&height);

    printf("What your weight? \n");
    scanf("%f",&weight);

    int result = getRecommendation(gender, height, weight);
    {
        if (result == -1)
            printf("Your weight not enough!\n");
        else if (result == 1)
            printf("Your weight is excessive!\n");
        else if (result == 0)
            printf("Your weight is normal!\n");

    }
    return 0;
}