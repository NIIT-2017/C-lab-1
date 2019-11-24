#include "task1.h"
#include <stdio.h>
int main() {
    char gender;
    float height = 0;
    float weight = 0;
   printf("Are you men or women? Enter m or w \n");
   /*fgets(gender, 256, stdin);*/
   scanf("%c", &gender);
   printf("What i your height in sm?\n");
   scanf("%f", &height);
   printf("What is your weight in kg?\n");
   scanf("%f", &weight);
   
     int result = getRecommendation(gender, height, weight);
   
       if (result == - 1) 
           printf("You are underweight!\n");

        else if (result == 1) 
           printf("You are overweight!\n");
      
       else
               printf("Your weight is ideal!\n");
            

   }



    