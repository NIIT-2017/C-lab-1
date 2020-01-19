#include "task4.h"
#include <stdio.h>

int main()
{
    int feet = 0, inches = 0; 
   
    printf ("Enter your feet and inches: "); 
    scanf ("%d %d", &feet, &inches); 

  
    printf ("Your syntimeters is: %.1f",convert ( feet, inches) ); 
        return 0;

}