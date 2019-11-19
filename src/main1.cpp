#include "task1.h"
#include<stdio.h>

int main()
{
    char gender;
    float height,weight;
    printf("Enter your gender!\n");
    scanf("%c",&gender);
    printf("Enter your height!\n");
    scanf("%f",&height);
    printf("Enter your weight!\n");
    scanf("%f",&weight);
    int result=getRecommendation(gender,height,weight);
    if(result ==0)
       printf("Your weight is good!\n");
    if(result==1)
       printf("You is Fat! You need to slim!\n");
    if(result==-1)
       printf("your weight is less!\n");
    return 0;
}

		    
