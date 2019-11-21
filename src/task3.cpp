#include <stdio.h>
#include <string.h>

char * convert(char buf[], double angle, char type)
{
    if (type == 'R')
    {
        angle = (angle * 180 / 3.14159);
        sprintf(buf,"%f%c",angle,'D');
        return buf;
    }
    else if (type == 'D')
    {
        angle = (angle*3.14159/180);
        sprintf(buf,"%f%c",angle,'R');
        return buf;
        }
    else
    {
            printf("Вы ввели неверное значение \n");
            sprintf(buf,"Выход из программы");
        return buf;
    }



    return 0;
}