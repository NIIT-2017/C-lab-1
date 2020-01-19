#include "task1.h"
int getRecommendation(char gender, float height, float weight)
{
    float weightnorm = 0;
    if (gender == 'm')
       weightnorm = height - 100;
    else
       weightnorm = height - 110;
    if (weightnorm > weight)
        return -1;
    else 
        if (weightnorm < weight)
            return 1;
        else
            return 0;
}