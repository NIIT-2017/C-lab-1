#include <stdio.h>
#include <string>
#include "task1.h"

int main()
{
    char gender;
    float height, weight;

    puts("Choose your gender (M or W):");
    scanf("%c", &gender);
    if (gender != 'm' && gender != 'M' && gender != 'w' && gender != 'W')
    {
        puts("Incorect gender.");
        return 0;
    }
    else
    {
        puts("Enter your height:");
        scanf("%f", &height);
        puts("Enter your weight:");
        scanf("%f", &weight);

        int recommendation = getRecommendation(gender, height, weight);

        switch (recommendation)
        {
        case 1:
            puts("Overweight.");
            break;
        case -1:
            puts("Underweight.");
            break;
        default:
            puts("Ideal weight.");
            break;
        }
    }
    return 0;
}