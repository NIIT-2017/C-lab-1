#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main() {
    int hour = 0;
    int min = 0;
    while (1) {
        printf("Hello! What's the time now? Write it in format HH:MM ");
        int timeresult = scanf("%d:%d", &hour, &min);
        if (timeresult < 2)
            clean_stdin();
        else
            break;
    }
    printf(greet(hour, min));
    return 0;
}