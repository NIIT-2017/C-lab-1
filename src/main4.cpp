#include <stdio.h>
#include "task4.h"

int main()
{
    int feet = 0;
    int inches = 0;
    printf("Enter your hieght in feet and inches (for exmple: 5'11): ");
    scanf("%d'%d", &feet, &inches);
    printf("%.1f cm\n",convert(feet, inches));
}

