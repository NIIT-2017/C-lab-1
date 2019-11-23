int getRecommendation(char gender, float height, float weight)
{   
    float ideal_weight;

    if (gender == 'm')
    {
        ideal_weight = height - 100;
        if (weight > ideal_weight)
            return 1;
        else if (weight < ideal_weight)
            return -1;
        else if (weight == ideal_weight)
            return 0;
    }
    else if (gender == 'w')
    {
        ideal_weight = height - 110;
        if (weight > ideal_weight)
            return 1;
        else if (weight < ideal_weight)
            return -1;
        else if (weight == ideal_weight)
            return 0;
    }
}