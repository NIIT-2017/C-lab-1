#include "task2.h"

int main()
{
    int hour = 0, min = 0, sec = 0;
    printf("Enter time (HH:MM:SS)\n");
    scanf("%d:%d:%d", & hour, & min, & sec);
        printf(greet(hour, min));
    return 0;
}