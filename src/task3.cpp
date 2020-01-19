
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNING
#include <math.h>
#include <stdio.h>

char* convert(char buf[], double angle, char type)

{
    double result = 0; // ���������� ���������� ���������� (������� ��� �������)

    if (type == 'd' || type == 'D')
    {
        result = (angle * M_PI / 180); // ������� ���������� �������� �������
        type = 'R';
    }
    else if (type == 'r' || type == 'R')
    {
        result = (angle * 180 / M_PI); // ������� ���������� �������� ��������
        type = 'D';
    }

    sprintf (buf, "%f%c", result, type); // ����� �������� � ������, ��������� ���������� buf
    return buf;

}