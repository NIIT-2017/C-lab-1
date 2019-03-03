const char* greet(int thour, int tmin)


{
	if (thour >= 0 && thour < 6)

		return "Good night!";

	else if (thour >= 6 && thour < 12)

		return "Good morning!";

	else if (thour >= 12 && thour < 18)

		return "Good day!";

	else if (thour >= 18 && thour <= 23)

		return "Good evening!";

	else

		return "Uncorrect time!";
}
