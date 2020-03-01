
int getRecommendation(char gender, float height, float weight)

{

	int perfectWeight = 0;

	if (gender == 'm')

	{
		perfectWeight = height - 110;
	}

	else if (gender == 'w')

	{
		perfectWeight = height - 100;
	}


	if (perfectWeight - weight > 0)

	{
		return 1;
	}

	else if (perfectWeight - weight < 0)

	{
		return -1;
	}

	else if (perfectWeight - weight == 0)

		return 0;
}