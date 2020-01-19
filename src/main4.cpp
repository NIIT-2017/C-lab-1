#include "task4.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	cout << "\n  Transformation of feet - > cm  \n";

    int feet = 0;
    int inches = 0;
	cout << "Specify your growth in feet, e.g. ff 'ii:  \n";
    scanf("%i'%i", &feet, &inches);
	cout << ("%f.1\n", convert(feet, inches));
}