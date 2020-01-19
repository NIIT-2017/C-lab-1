#include "task1.h"

int getRecommendation(char gender,float height,float weight)
{
   float ideal_weight;
   if(weight <= 0)
     return -1;
   if(gender =='m')
     ideal_weight = height -100;
   else if (gender =='w')
     ideal_weight=height-110;

   if(ideal_weight == weight)
     return 0;
   else if(ideal_weight > weight)
     return -1;
   if(ideal_weight < weight)
     return 1;
}
