#include "task1.h"
#include <stdio.h>
int main()
{
    int weight, height;
    char gender;
    printf("Enter your gender ");
    scanf("%c",&gender);
    printf("Enter your weight ");
    scanf("%d", &weight);
    printf("Enter your height ");
    scanf("%d",&height);
    switch (getRecommendation(gender, height, weight))
    {
    case -1:
        printf("Too low");
        break;
    case 0:
        printf("Ideal");
        break;
    case 1:
        printf("Too big");
        break;
    }
}