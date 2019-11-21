#include <stdio.h>
const char * greet(int hour,int min)

{
    if (hour >=00 && hour <= 05 && min >= 00 && min <= 59) // ночь" - с 00:00 до 06:00
    {
    return "Good Night!";
    }
    else if (hour >=06 && hour <= 11 && min >= 00 && min <= 59) // "утро" - с 06:00 до 11:00
    {
        return "Good morning!";
    }
    else if (hour >=11 && hour <= 18 && min >= 00 && min <= 59) //"день" - с 11:00 до 18:00
    {
        return "Good day!";
    }
    else if (hour >=18 && hour <= 23 && min >= 00 && min <= 59) //"вечер" - с 18:00 до 00:00 */
    {
        return "Good evening!";
    }
    else
    {
        return "Uncorrect time!";
    }
    return 0;
}
