int getRecommendation(char gender, float height, float weight)
{
	if (gender == 'm')
	{
		if ((height - 100) == weight) return 0;
		if ((height - 100) < weight) return 1;
		if ((height - 100) > weight) return -1;
	}
	if (gender == 'w')
	{
		if ((height - 110) == weight) return 0;
		if ((height - 110) < weight) return 1;
		if ((height - 110) > weight) return -1;
	}
}