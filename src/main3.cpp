#include "task3.h"

int main() {
	setlocale(LC_ALL, "Russian");

	char buf[64] = { 0 };
	char* asd = 0;
	float angle = 0.0;
	int type = 0;
	//printf("%s, %f, %d\n", buf, angle, type);

	while(true) {

		printf("������� ��� (R - �������, D - �������): ");
		//printf("������� ��� (R - �������, D - �������, x - �����): ");
		type = getchar();
		//printf("type = %c\n", type);
		clean_stdin();

/*		if(type == 'x') {
			printf("�����!\n");
			return 0;
		}
		else*/ if (type == 'R' || type == 'D') {
			printf("��� �������� ���� ����� ������������� ����� ������� �������, � �� �����.\n");
			printf("����� ��������� ����� ����� 8. ����� ������� ��������� �� ����� 3 ��������.\n");
			printf("������� �������� ����: ");
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
			printf("������ ������������ ���. ������� R ��� D.\n");
		}
	}

	return 0;
}
