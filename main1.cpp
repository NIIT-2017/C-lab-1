#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
	char gender[6];
	float height, weight;
	printf("Enter your gender:\n");
	scanf("%s", gender);//����� ���
	printf("Enter your height:\n");
	scanf("%f", &height);//����� ���� 
	printf("Enter your weight:\n");
	scanf("%f", &weight);//����� ���
	if (gender[0] == 'w')
			Women(height, weight);
	else if (gender[0] == 'm')
			Men(height, weight);
	else
			printf("Error");
	
	return 0;
}