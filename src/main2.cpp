#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>

int main() 
    {
        int hour = 0; 
        int min = 0; 
        int sec = 0; 
            printf("What is time?\n"); 
            scanf("%i:%i:%i", &hour, &min, &sec); 
            printf("%s", greet(hour, min));
        return 0;
    }