#include <stdio.h>
#include "task4.h"

int main()
{
    int feet=0;
    int inches =0;
    printf("Введите Ваш рост в виде футы'дюймы (xx'xx)\n");
    scanf("%d'%d",&feet,&inches);
       if (feet <=0&&inches<=0)
        {
            printf("Вы ввели некоректные данные\n");
            return 1;
        } else if (feet<0||inches<0)
        {
            printf(" Вы ввели некоректные данные\n");
            return 1;
        }

    float convert(int feet,int inches);
    float result = convert(feet,inches);

    printf(" Ваш рост в европейскей системе мер - %.1f \n",result);



    return  0;
}