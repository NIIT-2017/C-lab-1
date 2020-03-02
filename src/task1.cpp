int getRecommendation(char gender, float height, float weight)
{
    char p = gender;
    char m_men = 'm';
    char w_men = 'w';
    int optimal_weight = 0;
    if (p == m_men)
    {
        optimal_weight = height - 100;

        if (optimal_weight < weight)
            return 1;
        else if (optimal_weight > weight)
            return -1;
        else if (optimal_weight == weight)
            return 0;
    }
    else if (p == w_men)
    {
        optimal_weight = height - 110;

        if (optimal_weight < weight)
            return 1;
        else if (optimal_weight > weight)
            return -1;
        else if (optimal_weight == weight)
            return 0;
    }
}