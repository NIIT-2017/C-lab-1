const char* greet(int hour, int min)
{

	if (hour >= 0 && hour < 6 && min >= 1 && min <= 59)
		return ("Good night\n");
	else if (hour >= 6 && hour < 12 && min >= 1 && min <= 59)
		return ("Good morning\n");
	else if (hour >= 12 && hour < 18 && min >= 1 && min <= 59)
		return ("Good day\n");
	else if (hour >= 18 && hour <= 23 && min >= 1 && min < 59)
		return ("Good evening\n");
	else
		return ("Uncorrect time\n");
	
}
