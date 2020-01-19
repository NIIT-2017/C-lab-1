#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main()
{
    char gender = 0;
    float height = 0;
    float weight = 0;
    while (1) {
        printf("What's your sex? Write m or w ");
        scanf("%c", &gender);
        if (gender == 'm' || gender == 'w')
            break;
    }
    while (1) {
        printf("What's your height? ");
        int heightresult = scanf("%f", &height);
        if (heightresult < 1) {
            printf("You're wrong. Try again\n");
            clean_stdin();
        }
        else if (heightresult <= 0)
            printf("Your height is too less");
        else
            break;
    }
    while (1) {
        printf("What's your weight? ");
        int weightresult = scanf("%f", &weight);
        if (weightresult < 1) {
            printf("You're wrong. Try again\n");
            clean_stdin();
        }
        else if (weightresult <= 0)
            printf("Your weight is too less");
        else
            break;
    }
    int result = getRecommendation(gender, height, weight);
    if (result == -1)
        printf("You're underweight! Go eating!\n");
    else if (result == 1)
        printf("You're fat, honey! You should loose your weight\n");
    else
        printf("You're perfect!\n");
}