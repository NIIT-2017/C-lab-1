#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int main()
{
    int weight = 0;
    int height = 0;
    char gender = 0;
    int res = 0;

    printf("Input your gender: ");
    scanf("%c", &gender);
    printf("Input your height:\n ");
    scanf("%d", &height);
    printf("Input your weight:\n ");
    scanf("%d", &weight);
    res = getRecommendation(gender, height, weight);

    if (res ==  0)
    {
        printf("Your weight is ideal \n");
    }
    else if (res == 1)
    {
        printf("It's overweight\n");
    }
    else if (res == -1)
    {
        printf("It's underweight \n");
    }
    return 0;
}
