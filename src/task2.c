#include <stdio.h>
#include "task2.h"

const char * greet(int hour, int min, int sec) {
    if (hour >= 0 && hour <= 5 && min >= 0 && min <= 59 && sec >= 0 && sec <= 59) {
        return "Good night!";
    } else if (hour >= 6 && hour <= 11 && min >= 0 && min <= 59 && sec >= 0 && sec <= 59) {
        return "Good morning!";
    } else if (hour >= 12 && hour <= 17 && min >= 0 && min <= 59 && sec >= 0 && sec <= 59) {
        return "Good day!";
    } else if (hour >= 18 && hour <= 23 && min >= 0 && min <= 59 && sec >= 0 && sec <= 59) {
        return "Good evening!";
    } else {
        return "Entered data are incorrect";
    }
}
