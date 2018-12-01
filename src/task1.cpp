int getRecomendation(char gender, float height, float weight)
{
	if (gender == 'm' && height - weight > 100)		// Проверяем условия
		return 1;
	else if (gender == 'm' && height - weight == 100)
		return 0;
	else if (gender == 'm' && height - weight < 100)
		return -1;
	else if (gender == 'w' && height - weight > 110)
		return 1;
	else if (gender == 'w' && height - weight == 110)
		return 0;
	else if (gender == 'w' && height - weight < 110)
		return -1;
}