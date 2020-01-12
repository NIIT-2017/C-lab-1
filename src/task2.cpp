const char *greet(int hour, int min)
{
	if (min >= 60 || min < 0 || hour < 0 || hour >= 24)
		return "Uncorrect time!";
	if (hour >= 0 && hour <= 5)
		return "Good night!";
	if (hour >= 6 && hour <= 10)
		return "Good morning!";
	if (hour >= 11 && hour <= 17)
		return "Good day!";
	if (hour >= 18 && hour < 24)
		return "Good evening!";

}
