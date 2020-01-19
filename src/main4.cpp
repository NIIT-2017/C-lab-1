#include "task4.h"
#include<stdio.h>

int main()

{
    int feet=0,inches=0;
    printf("Enter your height in feet and Inches\n");
    scanf("%d%d",&feet,&inches);
    float result=convert(feet,inches);
    printf("Your height is : %.1f\n",result);
    return 0;
}
