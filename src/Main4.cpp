#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
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
    int feet = 0, inches = 0;
    printf("Hello, this program translates the British system of measures into metric.\n");
    printf("The program perceives data in the format: feet'inches.\n");
    while (1)
    {
        printf("Enter the data: ");
        if (scanf("%d'%d", &feet, &inches) != 2) 
        {
            printf("Incorrect data, format: feet'inches.!\n");
            clean_stdin();
            continue;
        }
        else
            break;
    }
    printf("%.1f", convert(feet, inches));
    return 0;
}