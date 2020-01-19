#include "task3.h"

void clean_stdin(void) {
	int c;
	do {
		c = getchar();
	} while(c != '\n' && c != EOF);
}


char* convert(char buf[], double angle, char type) {

	double result = 0.0, PI = 3.14159;
	double rad = 180 / PI;
	double grad = PI / 180;
	/*printf("PI = %f, rad = %f, grad = %f\n", PI, rad, grad);
	printf("buf1 = %s\n", buf);*/

	switch(type) {
	case 'R':
		result = angle * rad;
		break;
	case 'D':
		result = angle * grad;
		break;
	default:
		break;
	}
	//printf("result = %f\n", result);
	if(result != 0)
		sprintf(buf, "%f%c", result, type);
	//printf("buf2 = %s\n", buf);

	return buf;
}
