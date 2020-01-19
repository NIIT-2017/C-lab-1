#include "task1.h"
#include <stdio.h>
#include <clocale>

void clean_stdin(void)
{
	int c;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

int main() {

	setlocale(LC_ALL, "Russian");
	char sex;
	int height = 0, weight = 0;

	while(1) {
		printf("Введите свой пол: ");
		scanf("%c", &sex);
		

		if(sex == 'w' || sex == 'm') {
			clean_stdin();
			break;
		}
		else {
			printf("Неверно введён пол. w - женский, m - мужской.\n");
			printf("Или неверный формат данных.\n");
			clean_stdin();
		}
	}

	printf("Введите свой вес: ");
	scanf("%d", &weight);
	printf("Введите свой рост: ");
	scanf("%d", &height);

	if (height <= 100) {
		printf("Вы слишком маленького роста или ребёнок\n");
		return 0;
	}

	int result = getRecommendation(sex, height, weight);

	if (result == 0)
		printf("Ваш вес идеален! Поздравляем вас!\n");
	if (result > 0)
		printf("Ваш вес избыточен. Рекомендуем больше двигаться, меньше есть жирную и мучную пищу.\n");
	if (result < 0)
		printf("Ваш вес недостаточен! Рекомендуем больше есть и меньше двигаться.\n");

	return 0;
}
