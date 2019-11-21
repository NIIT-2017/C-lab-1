#include "task2.h"
const char* greet(int hour, int min)
{
    const char* buf;
    if (min > 60 || min < 0 || hour < 0 || hour >24)
        buf = "Uncorrect time!";
    else
    {
       if(hour>=0 &&hour<6)
           buf = "Good night!";
       if (hour >= 6 && hour < 11)
           buf = "Good morning!";
       if (hour >= 11 && hour < 18)
           buf = "Good day!";
       if (hour >= 18 && hour !=0)
           buf = "Good evening!";
    }
    return buf;   
}