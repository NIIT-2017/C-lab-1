
int getRecommendation(char gender, float height, float weight)
{
	float ideal_weight; // ��������� ������������� ������� ����������
	if (gender == 'm')// ����������� �������
	{									//���������� ��������� � ������������ � ��������
		ideal_weight = height - 100;// ��������� ��� = ��� ������� �� ����� - 100 (��� ������)
	}
	else 
	//����� ����� w 
	{
		ideal_weight = height - 110;// ��������� ��� = ��� ������� �� ����� - 110 (��� ������)
	}
	if(weight == ideal_weight)// ����������� �������
	{
		return 0;//������������ ��������
	}
	if (weight > ideal_weight)// ����������� �������
	{
		return 1;//������������ ��������
	}
	else {
		return -1;//������������ ��������
	}
}