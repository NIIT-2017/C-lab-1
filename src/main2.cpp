#include "task2.h"
#include <stdio.h>



int main()
{
    int hour = 0, min = 0;
    

    printf ("Enter any time: \n"); 
    scanf ("%d %d", &hour, &min);
   
   
    printf("%s", greet (hour,min)); // возвращение строковой константы из функции const char * greet (int hour, int min)
    

   


    return 0;
}

