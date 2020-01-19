const char* greet(int hour, int min)
{
	if ((0 <= hour) && (hour < 6) && (0 <= min) && (min <= 59))
		return "Good night!";
	else if ((6 <= hour) && (hour < 11) && (0 <= min) && (min <= 59))
		return "Good morning!";
	else if ((11 <= hour) && (hour < 18) && (0 <= min) && (min <= 59))
		return "Good day!";
	else if ((18 <= hour) && (hour < 24) && (0 <= min) && (min <= 59))
		return "Good evening!";
	else return "Uncorrect time!";
}