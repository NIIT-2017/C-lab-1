#include "task1.h"


int getRecommendation(char gender, float height, float weight)
{
    char p = gender;
    char m_men = 'm';                        // ���������� ����������� �������� '�'
    char w_men = 'w';                        //���������� ����������� �������� 'w'
    int optimal_weight = 0;                  // ���������� ���������� ����
    

    if (p == m_men)                         //�������� ������ ������� ���������� char p = '�'
    {
        optimal_weight = height - 100;

        if (optimal_weight < weight)        //��������� ������������ ���� � ����������� ������� �� ������������ � ����� �������� (-1,0,1)
            return 1;
        else if (optimal_weight > weight)
            return -1;
        else if (optimal_weight == weight)
            return 0;
    }
    else if (p == w_men)                    //�������� ������ ������� ���������� char p = 'w'
    {
        optimal_weight = height - 110;

        if (optimal_weight < weight)      //��������� ������������ ���� � ����������� ������� �� ������������ � ����� �������� (-1,0,1)
            return 1;
        else if (optimal_weight > weight)
            return -1;
        else if (optimal_weight == weight)
            return 0;
    }

  
}

   
  
