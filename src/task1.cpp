#include "task1.h"
int getRecommendation(char gender, float height, float weight)
{
    float coef = 0;
    if (gender == 'm')
		coef = height - 100;
    else
		coef = height - 110;
    if (coef > weight)
        return -1;
    else 
        if (coef < weight)
            return 1;
        else
            return 0;
}