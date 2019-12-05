#include <stdio.h>
#include "task4.h"

int main()
{
    int a = 0, b = 0; 
    printf("enter your height (feet'inches)\n");
    scanf("%d'%d", &a, &b);
    double result = convert(a, b);
    printf("%.1f\n", result);
}