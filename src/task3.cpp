
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNING
#include <math.h>
#include <stdio.h>

char* convert(char buf[], double angle, char type)

{
    double result = 0; // ïåðåìåííàÿ ðåçóëüòàòà âû÷èñëåíèÿ (ãðàäóñû èëè ðàäèàíû)

    if (type == 'd' || type == 'D')
    {
        result = (angle * M_PI / 180); // ôîðìóëà âû÷èñëåíèÿ çíà÷åíèå ðàäèàíû
        type = 'R';
    }
    else if (type == 'r' || type == 'R')
    {
        result = (angle * 180 / M_PI); // ôîðìóëà âû÷èñëåíèÿ çíà÷åíèå ãðàäóñîâ
        type = 'D';
    }

    sprintf (buf, "%f%c", result, type); // âûâîä çíà÷åíèé â ìàññèâ, óêàçàííûé àðãóìåíòîì buf
    return buf;

}
