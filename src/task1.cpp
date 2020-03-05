int getRecommendation(char gender, float height, float weight)
{
    float ideal_weight;

    if (gender == 'w' || gender == 'W')
        ideal_weight = height - 110;

    else if (gender == 'm' || gender == 'M')
        ideal_weight = height - 100;

    if (ideal_weight - weight > 0)
        return -1;

    else if (ideal_weight - weight < 0)
        return 1;

    else
        return 0;

}
