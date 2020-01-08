/*�������� ���������, ������� ��������� ���� �� ������������ ������� (����, �����) � ����������� (����������). ������
�������� � ���� ���� ����� �����, ��������� � ���� ������������� ����� � ��������� �� 1 �����. 1 ��� = 12 ������. 1 ���� = 2.54��. */

#include "task4.h"
#include <stdio.h>

float convert(int feet, int inches)
{
	if (feet < 0 || inches < 0) 
		printf("zanovo, cosoruky)\n");
	else
	{
		double ep = (((feet * 12) + inches) * 2.54);
		return ep;
	}
}