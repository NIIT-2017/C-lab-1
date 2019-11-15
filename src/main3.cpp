#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main() 
{
    char buf[16] = { 0 };
    double angle = 0;
    char type = 0;
    while (1)
    {
        printf("Write an angle in a format 00.00D or 00.00R ");
        int anglecheck = scanf("%lf%c", &angle, &type);
        if (anglecheck < 2) {
            printf("You're wrong. Try again\n");
            clean_stdin();
        }
        else if ((type == 'D') || (type == 'R'))
            break;
    }
    printf (convert(buf, angle, type));
    return 0;
}