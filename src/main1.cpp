#include "task1.h"
#include <stdio.h>
#include <string.h>

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

        printf("overweight\n"); //��� ���������

    else if (result < 0)

        printf("underweight\n"); //��� ���

    else

        printf("ideal weight\n"); //��� �������

    return 0;

}