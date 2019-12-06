#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int main()
{
    int weight = 0;
    int height = 0;
    char gender = 0;
    int ideal;
    int res = 0;

    printf("Input your gender: ");
    scanf("%d", &gender);
    printf("Input your height:\n ");
    scanf("%d", &height);
    printf("Input your weight:\n ");
    scanf("%d", &weight);
    res = getRecommendation(gender, height, weight);
    printf("Final %d", res);
}
