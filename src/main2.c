#include <stdio.h>
#include "task2.h"

int main() {
    int hour = -1;
    int min = -1;
    int sec = -1;
    
    printf("Enter time in format hh:mm:ss\n");
    scanf("%d:%d:%d", &hour, &min, &sec);
    printf("%s\n", greet(hour, min, sec));
    
    return 0;
    
}



