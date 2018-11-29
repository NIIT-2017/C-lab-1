#include <stdio.h>
#include "task1.h"


float idealWeight (char gender, float height) { // функция возвращающая значение идеального веса в зависимости от пола
    if (gender == 'm') {
        return height - 100;
    } else if (gender == 'w') {
        return height - 110;
    } else {
        return 0;
    }
}

int getRecommendation(char gender, float height, float weight) { // функция возращает значение, соответствующее рекоммендации по потере, набору или оставления в норме веса по результатам сравнения значения функции idealWeight с weight (значение, введенное пользователем)
    float yourIdealWeight = idealWeight(gender, height);
    if (yourIdealWeight < weight) {
        return 1;
    }
    else if (yourIdealWeight > weight) {
            return -1;
        } else {
            return 0;
        }
    }

