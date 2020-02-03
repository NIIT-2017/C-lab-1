#include <stdio.h>
#include "task2.h"

int main()
{
    int hours, minuts, second;
    int success = 0;

    puts("Entered time in format HH:MM:SS");
    scanf("%d %d %d", &hours, &minuts, &second);
        if (second >= 0 && second <= 59)
        {
            const char* time = greet(hours, minuts);
            printf("%s.\n", time);
        }
        else
            puts("incorect time.");
    return 0;
}
