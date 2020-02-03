const char *greet(int hour, int min)
{
    int succes = 0;

        if (hour >= 0 && hour < 6 && min >= 0 && min <= 59)
        {
            succes = 1;
            return "Good night";
        }
        else if (hour >= 6 && hour < 13 && min >= 0 && min <= 59)
        {
            succes = 1;
            return "Good morning";
        }
        else if (hour >= 13 && hour < 19 && min >= 0 && min <= 59)
        {
            succes = 1;
            return "Good day";
        }
        else if (hour >= 19 && hour < 0 && min >= 0 && min <= 59)
        {
            succes = 1;
            return "Good evening";
        }
        else
            return "Incorect time";
    
}