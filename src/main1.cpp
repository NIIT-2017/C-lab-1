#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>

char wrong()
{
    char str[] = "You are wrong!";
    return printf("%s", str);
}
int main()
{
    char gender = 0;
    float weight = 0;
    float height = 0;
    printf("What is your male? (m/w): ");
    scanf("%c", &gender);
    if ((gender != 'm') && (gender != 'w'))
    {
        wrong();
        return 1;
    }
    else
    {
        printf("What is your weight in kg? w= ");
        scanf("%f", &weight);
        
        if (weight <= 0)
        {
            wrong();
            return 2;
        }
        else
        {
            printf("What is your height in sm? h= ");
            scanf("%f", &height);
           
            if ((height <= 0) || (height > 300))
            {
                wrong();
                return 3;
            }
            else
            {
                int result = getRecommendation(gender, height, weight);
                switch (result)
                {
                case 1:
                    printf("You are too fat!");
                    break;
                case -1:
                    printf("You are too thin!");
                    break;
                case 0:
                    printf("You are normal!");
                    break;
                }
                return 0;
            }
        }
    }
}