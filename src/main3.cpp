#include "task3.h"
#include<stdio.h>
#define _CRT_SECURE_NO_WARNING

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);

}

int main()

{
    double angle = 0;
    char type = 0;
    char buf[32] = { 0 };


    printf(" Enter your value: ");
    scanf("%lf%c", &angle, &type);
    
    if (type != 'r' && type != 'R' && type != 'd' && type != 'D') // �������� ��������� ������ ���� ����������� ��������
         {
             printf(" Incorrect symbol, d / r!\n");
             return 0;
            
         }



    
    printf("%s", convert(buf, angle, type)); // ����� �������� ������� convert
    return 0;
}