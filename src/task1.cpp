int getRecommendation(char gender, float height, float weight)
{
	if (gender == 'M' || 'm')
	{
		if (weight == height - 100)
			return 0;
		else if (weight > height - 100)
			return 1;
		else
			return -1;
	}
	if (gender == 'W' || 'w')
	{
		if (weight == height - 110)
			return 0;
		else if (weight > height - 110)
			return 1;
		else return -1;
	}
}