#include "task4.h"

void clean_stdin(void) {
	int c;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

float convert(int feets, int inches) {

	float inche = 2.54, result = 0.0, resf = 0.0;
	float feet = 12 * inche;
	char buf[64] = { 0 };

	if(inches >= 12) {
		feets = feets + (inches / 12);
		inches = inches % 12;
		printf("feets = %d inches = %d\n", feets, inches);
	}

	result = (feets * feet) + (inches * inche);
	printf("convert result = %f\n", result);

	return result;
}
