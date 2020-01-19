#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int getRecommendation(char gender,int height, int weight)
{
    int ideal = 0;
    if (gender == 'm')
    {
        ideal = height - 100;
        if (weight > ideal)
        {
            return 1;
        }
        else if (weight < ideal)
        {
            return -1;
        }
        else if (weight == ideal)
        {
            return 0;
        }
    }
    else if (gender == 'w')
    {
        ideal = height - 110;
          if (weight > ideal)
        {
            return 1;
        }
        else if (weight < ideal)
        {
            return -1;
        }
        else if (weight == ideal)
        {
            return 0;
        }
    }else
    {
        printf("Uncorrect gender");
    }
}
