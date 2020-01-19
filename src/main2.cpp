#include "task2.h"
#include <stdio.h>

int main()
{
    int hour = 0, min = 0, sec = 0;
    printf("Enter the current time in HH:MM:SS format:\n");
    scanf("%d:%d:%d", &hour, &min, &sec);

    if (sec < 0 || sec > 59)
        printf("Uncorrect time!");
    else
        printf(greet(hour, min));

    return 0;
}
