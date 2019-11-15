#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
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
    int feet = 0;
    int inches = 0;
    while (1) {
        printf("Write feet and inches in a format 00'00 ");
        int numberresult = scanf("%i'%i", &feet, &inches);
        if (numberresult < 2) {
            printf("You're wrong. Try again\n");
            clean_stdin();
        }
        else
            break;
    }
    printf("%.1f", convert(feet, inches));
    return 0;
}