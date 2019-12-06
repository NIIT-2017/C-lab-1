#include <stdio.h>
#include <stdlib.h>
#include "task1.h"
int getRecommendation(char gender,int height, int weight)
{
    if (gender == "m")
    {
        return height - 100;
    }else if(gender == "w")
    {
        return height - 110;
    }else
    {
        printf("Wrong char");
        return 1;
    }
}
