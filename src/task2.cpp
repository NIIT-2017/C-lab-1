const char* greet(int hour, int min)
{
	if (hour >= 0 && hour < 6)		// Проверяем условия
		return "Good night!\n";
	else if (hour >= 06 && hour < 11)
		return "Good morning!\n";
	else if (hour >= 11 && hour < 18)
		return "Good day!\n";
	else if (hour >= 18 && hour <= 23)
		return "Good evening!\n";
}