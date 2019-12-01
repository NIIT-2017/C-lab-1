#include "task4.h"

int main() {
	setlocale(LC_ALL, "russian");

	float result = 0.0;
	int feets = 0, inches = 0;


	//while (true) {
		printf("Введите количество футов и дюймов в виде 5'11: ");
		scanf("%d'%d", &feets, &inches);
		printf("feets = %d inches = %d\n", feets, inches);
		clean_stdin();

		if(feets < 0 && inches < 0) {
			printf("Значения дюймов и футов не могут быть меньше нуля.\n");
		}
		else {
			result = convert(feets, inches);
		}

		printf("result = %f\n", result);

	//}

	return 0;
}
