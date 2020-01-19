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
		printf("������� ���� ���: ");
		scanf("%c", &sex);
		

		if(sex == 'w' || sex == 'm') {
			clean_stdin();
			break;
		}
		else {
			printf("������� ����� ���. w - �������, m - �������.\n");
			printf("��� �������� ������ ������.\n");
			clean_stdin();
		}
	}

	printf("������� ���� ���: ");
	scanf("%d", &weight);
	printf("������� ���� ����: ");
	scanf("%d", &height);

	if (height <= 100) {
		printf("�� ������� ���������� ����� ��� ������\n");
		return 0;
	}

	int result = getRecommendation(sex, height, weight);

	if (result == 0)
		printf("��� ��� �������! ����������� ���!\n");
	if (result > 0)
		printf("��� ��� ���������. ����������� ������ ���������, ������ ���� ������ � ������ ����.\n");
	if (result < 0)
		printf("��� ��� ������������! ����������� ������ ���� � ������ ���������.\n");

	return 0;
}
