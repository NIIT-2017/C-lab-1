#include "task3.h"
#include <stdio.h>
#include <iostream>

int main()
{
	std::cout << "\n		Convert degrees to radians and reverse \n";
	
    float angle = 0;
    char type = '0';
	std::cout << " Specify the angle value in the format '_ _ d' in degrees or '_ _ r' in radians: ";
    scanf("%f%c", &angle, &type);
    char buf[100] = { 0 };
    printf("%s\n", convert(buf, angle, type));
    return 0;
} 