int getRecommendation(char gender, float height, float weight)
{
	if (gender=='m')
		if (weight<height-100)
			return -1;
		else if (weight>height-100)
			return 1;
		else return 0;
	else if (gender=='w')
		if (weight<height-110)
			return -1;
		else if (weight>height-110)
			return 1;
		else return 0;
}