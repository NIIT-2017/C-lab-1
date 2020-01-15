const char *greet(int hour, int min)
{
	
		if (hour>=0 && hour<6)
			return "good night!\n";
		else if (hour>=6 && hour<11)
			return "good morning!\n";
		else if (hour>=11 && hour<18)
			return "good day!\n";
		else //if (hour>=18 && hour<24)
			return "good evening!\n";
	
}