#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"//���������� ����������
#include<stdio.h>
int main() // ��������� ������� main
{
	char gender;
	float height, weight;// ��������� ����������
	printf("enter your gender m or w ");// ������ � ������� ������ ���
	scanf("%c",&gender);// ���� ������ � ���������� � ��������� �� ���������� ���� ����� �������� �������� ��������

	printf("enter your height ");// ���� ��� � ������
	scanf("%f", &height);
	printf("enter your weight ");
	scanf("%f",  &weight);

	printf("your height and weight: %f and %f \n", height, weight); // ������� � ������� �������� � ������ ������� �� �����
	printf("Your gender: %c\n", gender);
								//��������� �� ���������� ������� getRecommendation ...
	int result = getRecommendation(gender, height, weight); // ������� ������� � ������� � �� ���� �������� � ��������� ��������� ���������� ������� � ������
	printf("result: %d", result);
	if (result == 0)// �������� ������� ->
	{
		printf("vas ves idealen\n");// � ������� �� � ������� � ������������ � �� ����������
	}
	else if (result == 1)
	{
		printf("vas ves bolshoi\n");
	}
	else
	{
		printf("vas ves mal\n");
	}
	return 0;
}
