char gender[10] = { 'm', 'w' };
float height = 0, weight = 0;
int getRecommendation(char gender, float height, float weight)
{

	float normWeight = 0;
	if (gender == 'm')
		normWeight = height - 100;
	if (gender == 'w')
		normWeight = height - 110;
	float dWeight = weight - normWeight;
	if (dWeight < 0)
		return -1;
	if (dWeight > 0)
		return 1;
	return 0;
}