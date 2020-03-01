
int getRecommendation(char gender, float height, float weight)

{

	int perfectWeight = 0;

	if (gender == 'm')

	{
		perfectWeight = height - 100;

		if (perfectWeight < weight)

		{
			return 1;
		}

		else if (perfectWeight > weight)

		{
			return -1;
		}

		else if (perfectWeight == weight)
			return 0;
	}

	else if (gender == 'w')

	{
		perfectWeight = height - 110;

		if (perfectWeight < weight)

		{
			return 1;
		}

		else if (perfectWeight > weight)

		{
			return -1;
		}

		else if (perfectWeight == weight)
			return 0;
	}

}