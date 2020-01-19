#include "task3.h"
#include <stdio.h>

int main()
{                       
    float a = 0;
    char b = 0; 
    char buf[256];
    printf("enter the angle value (xD/R)\n");
    scanf("%f%c", &a, &b);
    if (b != 'R' && b != 'D')
        printf("uncorrect value\n");
    else
        printf(convert(buf, a, b));
    return 0;
}