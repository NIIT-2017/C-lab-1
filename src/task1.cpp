int getRecommendation(char gender, float height, float weight)
{
	if (gender == 109 && weight == height - 100)
		return 0;
	else if (gender == 109 && weight > height - 100)
		return 1;
	else if (gender == 109 && weight < height - 100)
		return -1;
	else if (gender == 119 && weight == height - 110)
		return 0;
	else if (gender == 119 && weight > height - 110)
		return 1;
	else if
		(gender == 119 && weight < height - 110)
		return -1;
}

