#include "task2.h"

const char * greet(int hour, int min)
{
    

    if ((hour > 24) || (min > 60))   // оператор выбора временного промежутка при котором будет возвращение строковой константы в функцию int main()
        return "Uncorrect time!";

    else if ((hour > 00) && (hour < 06))
        return "Good morning!";

    else if ((hour >= 06) && (hour < 11))
        return "Good day!";

    else if ((hour >= 11) && (hour < 18))
        return "Good evening!";

    else if ((hour >= 18) && (hour < 24))
        return "Good night!";
   
    

}



