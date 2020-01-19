#include "task3.h"
#include <stdio.h>

char*convert(char buf[],double angle,char type)
{
    float result;
    const float Pi=3.14159;
    const float angle_value=180.00;
    if(type =='D')
    {
       result=angle*Pi/angle_value;
       type='R';
    }
    else if (type =='R')
    {
       result=angle*angle_value/Pi;
       type ='D';
    }
    sprintf(buf,"%f%c",result,type);
    return buf;
}
