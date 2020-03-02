#include "task1.h"
int getRecommendation (char gender, float height, float weight)
{ 
    float normalWeight = 0; 
    if (gender == 'm') 
            normalWeight = height - 100; 
    if (gender == 'w') 
        normalWeight = height - 110; 
    float deltaWeight = weight - normalWeight; 
        if (deltaWeight < 0) 
			return -1; 
        if (deltaWeight > 0) 
			return 1; 
    return 0; 
}