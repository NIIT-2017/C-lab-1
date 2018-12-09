char const*greet(int hour, int min)
{
	if (hour >= 0 && hour < 6)			//проверяем условия
		return "Good night!";
	else if (hour >= 6 && hour < 11)
		return "Good morning!";
	else if (hour >= 11 && hour < 18)
		return "Good day!";
	else if (hour >= 18 && hour < 24)
		return "Good evening!";
	else if (hour < 0 && hour>24)
		return "Uncorrect time!";
}