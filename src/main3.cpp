#include <stdio.h>
#include <math.h>
#include "task3.h"


int main()
{
    double angle = 0;
    char type = 0;
    char buf[50];

    printf("Enter value in 00.00D or 00.00R: ");
    scanf("%lf%c", &angle, &type);

    if (type != 'D'&& type != 'R')
        {
            printf("Incorrect value!");
        }
    else
        {
            printf("Result is: \n");
            printf(convert(buf, angle, type));
        }

    return 0;
}
