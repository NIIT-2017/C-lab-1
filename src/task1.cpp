#include "task1.h"


int getRecommendation(char gender, float height, float weight)
{
    char p = gender;
    char m_men = 'm';                        // переменная присваивает значение 'м'
    char w_men = 'w';                        //переменная присваивает значение 'w'
    int optimal_weight = 0;                  // переменная идеального веса
    

    if (p == m_men)                         //оператор выбора условия переменной char p = 'м'
    {
        optimal_weight = height - 100;

        if (optimal_weight < weight)        //сравнение оптимального веса с полученными данными от пользователя и вывод значения (-1,0,1)
            return 1;
        else if (optimal_weight > weight)
            return -1;
        else if (optimal_weight == weight)
            return 0;
    }
    else if (p == w_men)                    //оператор выбора условия переменной char p = 'w'
    {
        optimal_weight = height - 110;

        if (optimal_weight < weight)      //сравнение оптимального веса с полученными данными от пользователя и вывод значения (-1,0,1)
            return 1;
        else if (optimal_weight > weight)
            return -1;
        else if (optimal_weight == weight)
            return 0;
    }

  
}

   
  
