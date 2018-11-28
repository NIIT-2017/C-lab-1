const char * greet(int hour, int min, int sec)
{
	int time = (hour * 60 * 60) + (min * 60) + sec;
	if (time >= 0 && time < 21600)
		return "Good night!\n";
	else if (time >= 21600 && time < 39600)
		return "Good morning!\n";
	else if (time >= 39600 && time < 64800)
		return "Good day!\n";
	else if (time >= 64800 && time < 86400)
		return "Good evening!\n";
}