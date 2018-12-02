#include <stdio.h>
#include "task3.h"

int main()
{
    char type;
    float angle;
    char buf[30];
    
    printf("Enter angle: ");
    scanf("%f%c", &angle, &type);
    printf(convert(buf, angle, type));
    
    return 0;
}
