#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

int main()
{
    float angle = 0;
    char type = '0';
    printf("What is angle?\n");
    scanf("%f%c", &angle, &type);
    char buf[100] = { 0 };
    printf("%s\n", convert(buf, angle, type));
    return 0;
}