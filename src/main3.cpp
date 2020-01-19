#include "task3.h"
#include <stdio.h>
int main()
{
    char* buf = new char[30];
    printf("Enter number");
    double number;
    scanf("%lf", &number);
    printf("Enter Type");
    char type;
    scanf("%c", &type);
    scanf("%c", &type);
    printf("%s", convert(buf, number, type));
}