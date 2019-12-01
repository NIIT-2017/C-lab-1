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

	sprintf(buf, "%d,%d", feets, inches);
	resf = atof(buf);
	printf("convert resf = %f\n", resf);
	result = resf * feet;
	printf("convert result = %f\n", result);

	return result;
}
