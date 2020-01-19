#include "task1.h"

int getRecommendation(char gender, float height, float weight)

//Идеальный_вес=Рост-100 - для мужчин и Идеальный_вес=Рост-110 - для женщин.

{
    if (gender == 109)
    {
        if (height-weight > 100)
        {
            return -1; //недостаточен
        } else if (height-weight == 100)
        {
            return 0; // Идеален
        }else if (height-weight < 100)
        {
            return 1; // Избыточен
        }
    } else
    if (height-weight > 110)
    {
        return -1;
    } else if (height-weight == 110)
    {
        return 0;
    }else
    {
        return 1;
    }


}
