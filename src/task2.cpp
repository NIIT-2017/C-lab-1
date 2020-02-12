const char* greet(int hour, int min)
{
	int time = 0;
	if ((hour >= 0) && (hour < 6))
		time = 1;
	else
		if ((hour >= 6) && (hour < 11))
			time = 2;
		else
			if ((hour >= 11) && (hour < 18))
				time = 3;
			else 
				if ((hour >= 18) && (hour < 24))
					time = 4;
	switch (time)
	{
		case 1:
			return "Good night!";
		case 2:
			return "Good morning!";
		case 3:
			return "Good day!";
		case 4:
			return "Good evening!";
		default:
			return "Uncorrect time!";
	}
}