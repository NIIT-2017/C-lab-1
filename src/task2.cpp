#include "task2.h"

const char* greet(int hour, int min)
{
    if (!((hour >= 00) && (hour < 24)) || !((min >= 00) && (min < 60)))
        return "Uncorrect time!";
    if((hour>=00)&&(hour<=05))
        return "Good night!";
    if ((hour >= 06) && (hour <= 10))
        return "Good morning!";
    if ((hour >= 11) && (hour <= 17))
        return "Good day!";
    if ((hour >= 18) && (hour <= 23))
        return "Good evening!";
}
