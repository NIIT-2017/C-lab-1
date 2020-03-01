const char* greet(int hour, int min)

{

	if (hour < 0 || hour > 24 || min < 0 || min > 60)
		return "\nUncorrect time!\n";


	else if (hour >= 0 && hour < 6)
		return "\nGood night!\n";


	else if (hour >= 6 && hour < 11)
		return "\nGood morning!\n";


	else if (hour >= 11 && hour < 18)
		return "\nGood day!\n";

	else
		return "\nGood evening!\n";



}