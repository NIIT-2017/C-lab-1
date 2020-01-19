int getRecommendation(char gender, float height, float weight) {
    float smM = 100;
    float smW = 110;
    float idealWeight = 0;
    int result = 0;
    
    if (gender == 'm') {
        idealWeight = height - smM;
    }
    else {
        idealWeight = height - smW;
    }
    
    if (idealWeight > weight) {
        result = -1;
    }
    else if (idealWeight < weight) {
        result = 1;
    }
    else  {
        result = 0;
    }
    return result;
}



