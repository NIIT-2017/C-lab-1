int getRecommendation(char gender, float height, float weight)
{
    int coef;
    if (gender == 'm')
        coef = 100;
    else
        coef = 110;
    if (weight > height - coef)
        return 1;
    if (weight < height - coef)
        return -1;
    else
        return 0;
}