#include <stdio.h>
#include "task3.h"

int main()
{
    float angle;
    char type;
    char buf[10];
    
    printf("Enter angle:");
    scanf("%f%c", &angle, &type);
    printf(convert(buf, angle, type));
    
}
