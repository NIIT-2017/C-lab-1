#include "task3.h"

int main() {
	setlocale(LC_ALL, "Russian");

	char buf[64] = { 0 };
	char* asd = 0;
	float angle = 0.0;
	int type = 0;
	//printf("%s, %f, %d\n", buf, angle, type);

	while(true) {

		printf("Введите тип (R - радианы, D - градусы): ");
		//printf("Введите тип (R - радианы, D - градусы, x - выход): ");
		type = getchar();
		//printf("type = %c\n", type);
		clean_stdin();

/*		if(type == 'x') {
			printf("Выход!\n");
			return 0;
		}
		else*/ if (type == 'R' || type == 'D') {
			printf("При введении угла после целочисленной части вводите запятую, а не точку.\n");
			printf("Длина вводимого числа равна 8. После запятой допустимо не более 3 символов.\n");
			printf("Введите значение угла: ");
			scanf("%f", &angle);
			//printf("angle = %f\n", angle);
			clean_stdin();

			switch(type) {
			case 'R':
				asd = convert(buf, (double) angle, 'R');
				printf("asd = %s\n", asd);
				break;
			case 'D':
				asd = convert(buf, (double) angle, 'D');
				printf("asd = %s\n", asd);
				break;
			default:
				break;
			}
		}
		else {
			printf("Введен неправильный тип. Введите R или D.\n");
		}
	}

	return 0;
}
