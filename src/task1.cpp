
int getRecommendation(char gender, float height, float weight)
{
	float ideal_weight; // объ€вл€ем доплнительную искомую переменную
	if (gender == 'm')// провер€емое условие
	{									//производим сравнение в соответствии с заданием
		ideal_weight = height - 100;// идеальный вес = вес который мы ввели - 100 (дл€ мужчин)
	}
	else 
	//иначе ввели w 
	{
		ideal_weight = height - 110;// идеальный вес = вес который мы ввели - 110 (дл€ женщин)
	}
	if(weight == ideal_weight)// провер€емое условие
	{
		return 0;//возвращаемое значение
	}
	if (weight > ideal_weight)// провер€емое условие
	{
		return 1;//возвращаемое значение
	}
	else {
		return -1;//возвращаемое значение
	}
}