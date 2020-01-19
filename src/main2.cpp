#include "task2.h"
#include<stdio.h>

int main()

{
    int hour=0,min=0,sec=0;
    printf("Please Enter your time!\n"
        "Enter Hour!\n");
    scanf("%d",&hour);
    printf("Enter the minutes!\n");
    scanf("%d",&min);
    printf("Enter the seconds!\n");
    scanf("%d",&sec);
    printf(greet(hour,min));
    return 0;
}

