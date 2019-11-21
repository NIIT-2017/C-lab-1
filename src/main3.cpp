
#include "task3.h"
#include <stdio.h>



int main()
{
    char* buf[50];
    double angle;
    char type;
    printf("Введите значение в формате xxD/xxR\n");
    scanf("%lf%c",&angle,&type);


    char * convert(char buf[], double angle, char type);

    printf("%s\n", convert(buf[50],angle,type));


    return 0;
}
