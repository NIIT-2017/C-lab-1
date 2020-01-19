#include "task2.h"
#include <stdio.h>

int main()
{
    int hour = 0;
    int min = 0;
    int sec = 0;
    printf("Write the current time in HH:MM:SS format\n");
    scanf("%i:%i:%i", &hour, &min, &sec);
    printf("%s\n", greet(hour, min));
    return 0;
}