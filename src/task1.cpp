#include "task1.h"

int getRecommendation(char gender, float height, float weight)
{
    float abs = 0;
    if (gender == 'm') 
        abs = 100;
    else
        abs = 110;
    if ((height - abs)>weight)
        return -1;
    else if ((height - abs)<weight)
        return 1;
    else
        return 0;
       
}
