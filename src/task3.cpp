#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
	const double PI = 3.14159265359;        // ������ ��������� ��

	if (type == 'D')
	{
		angle = angle * (PI / 180.0);		// ��������� � �������
		sprintf(buf, "%.2f%c", angle, 'R');
	}
	if (type == 'R')
	{
		angle = angle * (180.0 / PI);		// ��������� � �������
		sprintf(buf, "%.2f%c", angle, 'D');
	}

	return buf;
}
