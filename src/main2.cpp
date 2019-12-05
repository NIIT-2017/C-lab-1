#include "task2.h"
#include <stdio.h>

int main() 
{
    int hour = 0, min = 0, sec = 0;
      printf("What time is it?(hh:mm:ss)\n");
      scanf("%d %d %d", &hour, &min, &sec);
        if (sec>60 || sec<0)
            printf("Uncorrect time!\n");
        else
            printf(greet(hour, min));
}