#include "task4.h"
#include <stdio.h>
int main()
{
    printf("Enter feet");
    int feet;
    scanf("%d", &feet);
    printf("Enter inches");
    int inches;
    scanf("%d", &inches);
    printf("\n%f sm", convert(feet, inches));
}