#include "task2.h"
#include <stdio.h>
int main()
{
    printf("Enter hour");
    int hour;
    scanf("%d", &hour);
    printf("Enter minute");
    int min;
    scanf("%d", &min);
    printf(greet(hour, min));
}