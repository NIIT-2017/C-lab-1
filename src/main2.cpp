#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS //��� ����������� ������ �4996
#include <stdio.h>

int main()
{
	int hour = 0, min = 0; //��������� ����������

		printf("Enter time\n hour and min\n"); //������ ������ ������
		scanf("%d %d", &hour, &min); //��������� �������� ������
		printf("%s\n", greet (hour, min)); //����� ���������� ������ ������� greet �� task2

		return 0;
}