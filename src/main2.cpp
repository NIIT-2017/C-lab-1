#include "task2.h"
#include <stdio.h>

int main() {

    int hour = 0;
    int min = 0;

    printf("What time is it?\n");
    scanf("%d:%d", &hour, &min);
    printf("%s\n", greet(hour, min));
    return 0;
}


