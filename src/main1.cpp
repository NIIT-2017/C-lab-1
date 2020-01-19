#include "task1.h"
#include <stdio.h>


int main()

{
            char gender = 0;                     
            float height = 0, weight = 0;
            
            printf ("What your gender (m/w)? \n");  // функция вывода текста 
            scanf ("%c", &gender);                 // функция ввода значения пользователем
           
            if ((gender != 'm') && (gender != 'w'))  // оператор выбора некорректного значения переменной gender
            {
                printf ("You entered the wrong gender!\n"); // функция вывода текста некорректного ввода пола
                return 0;
            }

            printf ("What your height? \n");         // функция вывода текста 
            scanf ("%f", &height);                   // функция ввода значения пользователем

            printf("What your weight? \n");         // функция вывода текста 
            scanf ("%f", &weight);                  // функция ввода значения пользователем
           
            
        
        int result = getRecommendation ( gender, height, weight); // вывод значения (-1,0,1) функцией getRecommendation ( gender, height, weight)
        {
            if (result == -1)                              // оператор выбора значения -1,0,1
                printf("Your weight not enough!\n");
            else if (result == 1)
                printf("Your weight is excessive!\n");
            else if (result == 0)
                printf("Your weight is normal!\n");
            
        }
   
        return 0;
}

