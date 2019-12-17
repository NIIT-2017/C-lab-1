#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

void clean_stdin(void)
{
    int c;
    do
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main()
{
    char buf[16] = { 0 };
    double angle = 0;
    char type = 'z';

    printf("Hello, this is a program to convert degrees to radians or back.\n");
    printf("The program perceives the data in the format value (00.00)+ attribute, where the attribute R-radians, D-degrees.\n");

    while (1)
    {
        printf("Enter the data: ");
        if (scanf("%lf%c", &angle, &type) != 2)
        {
            printf("Incorrect data, format 00.00d or 00.00r!\n");
            clean_stdin();
            continue;
        }
        else if (type != 'd' && type != 'D' && type != 'r' && type != 'R') 
        {
            printf("Incorrect symbol, d or r!\n");
            clean_stdin();
            continue;
        }
        else
            break;
    }
    printf("%s", convert(buf, angle, type));
    return 0;
    }