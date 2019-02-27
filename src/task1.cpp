int getRecommendation(char gender, float height, float weight)
{
	int idealWeight;
	if (gender == 'm')
		idealWeight = height - 100;
	else if (gender == 'w')
		idealWeight = height - 110;
	if (weight < idealWeight)
		return -1;
	if (weight > idealWeight)
		return 1;
	if (weight == idealWeight)
	return 0;
}