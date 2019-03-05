const char* greet(int hour, int min)
{
	int minutes = 0;
	minutes = (hour * 60) + min;
	if (0 <= minutes && minutes <= 359) return "Good night!";
	if (360 <= minutes && minutes <= 659) return "Good morning!";
	if (660 <= minutes && minutes <= 1079) return "Good day!";
	if (1080 <= minutes && minutes <= 1439) return "Good evening!";
	else return "Uncorrect time!";
}
