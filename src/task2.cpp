const char* greet(int hour, int min)
{
	if (hour >= 00 && hour < 06 && min >= 00 && min < 60)
		return ("Good night!");
	if (hour >= 06 && hour < 11 && min >= 00 && min < 60)
		return ("Good moning!");
	if (hour >= 11 && hour < 18 && min >= 00 && min < 60)
		return ("Good day!");
	if (hour >= 18 && hour < 24 && min >= 00 && min < 60)
		return ("Good evening!");
	else return ("Uncorrect time!");
}