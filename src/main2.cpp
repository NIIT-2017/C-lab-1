#include "task2.h"
#include <stdio.h>

int main() {
    int hour = 0;
    int min = 0;
    int sec = 0;

    while (1){
        printf("What time is it?\n");
        scanf("%d:%d:%d", &hour, &min, &sec);
        if (sec < 0 || sec >60) {
            printf("Uncorrect time!\n");
        }
        else {
            printf(greet(hour, min)); 
            break;
        }
    }
}
