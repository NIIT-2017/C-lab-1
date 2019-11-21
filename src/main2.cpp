#include <stdio.h>
#include "task2.h"

int main() {
    int hour;
    int min;
    printf(" Введите текущее время, в формате ЧЧ:ММ \n");
    scanf("%02d:%02d", &hour, &min);


   const char* result = greet(hour, min);
   printf("%s",result);

    return 0;
}