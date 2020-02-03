const char *greet(int hour, int min)
{
        if (hour >= 0 && hour < 6 && min >= 0 && min <= 59)
        {
            return "Good night!";
        }
        else if (hour >= 6 && hour < 12 && min >= 0 && min <= 59)
        {
            return "Good morning!";
        }
        else if (hour >= 12 && hour < 19 && min >= 0 && min <= 59)
        {
            return "Good day!";
        }
        else if (hour >= 19 && hour < 24 && min >= 0 && min <= 59)
        {
            return "Good evening!";
        }
        else
            return "Uncorrect time!";
    
}
