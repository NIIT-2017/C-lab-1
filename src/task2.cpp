const char* greet(int hour, int min)
{

	const char * greets[] = { "Good night", "Good morning", "Good day", "Good evening", "Uncorrect time" };
	if (hour < 24 && min < 60)
	{
		int timeinminutes = hour * 60 + min;
		if (timeinminutes < 6 * 60)
			return greets[0];
		else if (timeinminutes < 11 * 60)
			return greets[1];
		else if (timeinminutes < 18 * 60)
			return greets[2];
		else
			return greets[3];
	}
	else
		return greets[4];
}
