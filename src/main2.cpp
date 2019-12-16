#include "task2.h"
#include <stdio.h>

void clean_stdin(void) // the option to clear the input buffer
{
    int c;
    do
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main()
{
    int hour = 0, min = 0;
    while (1)
    {
        printf("Please, enter time (hour:minute):");
        if (scanf("%d:%d", &hour, &min) != 2)
        {
            printf("Incorrect answer, only numbers and positive! \n");
            clean_stdin();
            continue;
        }
        break;
    }
    printf("%s", greet(hour, min));
    return 0;
}