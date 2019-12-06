#include <stdio.h>
#include "task4.h"

int main()
{
    int feet = 0;
    int inches = 0;
    printf("Enter your size?\n");
    scanf("%i'%i", &feet, &inches);
    printf("%.1f\n", convert(feet, inches));
}
