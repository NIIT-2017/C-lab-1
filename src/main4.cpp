#include "task4.h"

int main() {
	setlocale(LC_ALL, "russian");

	float inche = 2.54, result = 0.0;
	float feet = 12 * inche;
	char type = 0;
	printf("inche = %f, feet = %f\n", inche, feet);
	int feets = 0, inches = 0;
	char str[8] = { 0 };

	//while (true) {
		printf("������� ���������� ����� � ������ � ���� 5'11: ");
		scanf("%d'%d", &feets, &inches);
		printf("feets = %d inches = %d\n", feets, inches);
		clean_stdin();

		if(feets < 0 && inches < 0) {
			printf("�������� ������ � ����� �� ����� ���� ������ ����.\n");
		}
		else {
			if(inches >= 12) {
				feets = feets + (inches / 12);
				inches = inches % 12;
				printf("feets = %d inches = %d\n", feets, inches);
			}
			result = convert(feets, inches);
		}

		printf("result = %f\n", result);

	//}

	return 0;
}
