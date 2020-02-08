#include <stdio.h>
#include "task3.h"
int main()
{
    char buf[20];
    double angle;
    char type;
    int success = 0;
    puts("Enter a value in format \"00 R or 00 D\":");
    while (success == 0)
    {
        scanf("%lf %c", &angle, &type);
        switch (type)
        {
        case 'r':
        case 'R':
        case 'D':
        case 'd':
            printf(convert(buf, angle, type));
            success = 1;
            break;

        default:
            puts("invalid value - repeat.");
            continue;

        }
    }
    return 0;

}