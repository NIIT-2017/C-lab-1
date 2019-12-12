const char* greet(int hour, int min)
{
	if (0 <= hour && hour < 24 && 0 <= min && min< 60)
	{
		if (0 <= hour && hour< 6)
			return "Good night!";
		else if (6 <= hour && hour < 11)
			return "Good morning!";
		else if (11 <= hour && hour < 18)
			return "Good day!";
		else
			return "Good evening!";
	}
	else
		return "Uncorrect time!";
}