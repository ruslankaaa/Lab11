#include <stdio.h>
#include <locale.h>
#include <math.h>

#define maxsize 100
#define _USE_MATH_DEFINES 


int ma11in()
{
	setlocale(LC_CTYPE, "RUS"); 
	double Array[maxsize];
	double x, y;
	int i=0;
	double srz = 0.0;
	int countplus = 0; 
	int countminus = 0;
	double sumplus = 0.0;
	double summinus = 0.0;
	char namearray[] = "Array";

//���������� �������� ������� �� �������� �������
	for (i = 0, x = 0.15; i < maxsize; i++, x += (2.1 - 0.15) / maxsize)
	{
		y = x - 3 * pow(cos(x + 1), 2);
		Array[i] = y;
	}
// ����� �������� �������
	for (i = 0;i < maxsize;i++)
	{
		printf("%.4f\n", Array[i]);
	}
// ���������� �������� �������� 
	for  (i = 0; i < maxsize; i++)
	{
	
		if (Array[i]>0)
		{
			srz += Array[i] / maxsize;
		}
	}
// ���������� ������������� � ������������� ��������� �������
	for  (i = 0; i < maxsize; i++)
	{
		if (Array[i] > 0)
		{
			countplus++;
		}
		else if (Array[i]<0)
		{
			countminus++;
		}

	}
// ����� ������������� � ������������� ��������� �������
	for ( i = 0; i < maxsize; i++)
	{
		if (Array[i]>0)
		{
			sumplus += Array[i];
		}
		else if (Array[i] < 0)
		{
			summinus += Array[i];
		}
	}


	printf("��� �������: %s\n", namearray); 
	printf("C���� ������������� ���������: %f\n", summinus);
	printf("����� ������������� ���������: %f\n", sumplus);
	printf("���������� ������������� ���������: %d\n", countminus); 
	printf("���������� ������������� ���������: %d\n", countplus);
	printf("������� �������� ������������� ���������: %f\n", srz); 
}