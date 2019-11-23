#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>

int main()
{
    int hour = 0;
    int min = 0;
    int sec = 0;
    printf("What time is it now? (Tape in format hh:mm:ss):");
    scanf("%d:%d:%d",&hour,&min,&sec);
    if ((sec < 0) || (sec > 59))
        printf("Uncorrect time!");
    else
        printf(greet(hour, min));
        return 0;
}