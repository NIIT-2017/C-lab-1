#include <stdio.h>
#include "task4.h"

int main()
{
    int a = 0, b = 0;
    printf("Enter value in feet and inches\n");
    printf("Example:(5'11) \n");
    scanf("%d'%d", &a, &b);
    double result = convert(a, b);
    printf("Result in centimeters: %.2f\n", result);
    return 0;
}