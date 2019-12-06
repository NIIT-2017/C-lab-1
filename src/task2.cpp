const char* greet(int hour, int min)
{
    const char *phrase[] = { "Uncorrect time!",
                             "Good night!",
                             "Good morning!",
                             "Good day!",
                             "Good evening!" };

    if (min < 0 || min > 59)
        return phrase[0];
    else if (hour >= 0 && hour < 6)
        return phrase[1];
    else if (hour >= 6 && hour < 11)
        return phrase[2];
    else if (hour >= 11 && hour < 18)
        return phrase[3];
    else if (hour >= 18 && hour <= 23)
        return phrase[4];
    else
        return phrase[0];
}
