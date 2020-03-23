#include "task2.h"
#include <stdio.h>

int main()
{
    int hour = 0, min = 0;
    printf("Enter any time: \n");
    printf("Exemple: (13:57) \n");
    scanf("%d %d", &hour, &min);
    printf("%s", greet(hour, min));
    return 0;
}