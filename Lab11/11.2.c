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

//Генерируем значения массива по заданной функции
	for (i = 0, x = 0.15; i < maxsize; i++, x += (2.1 - 0.15) / maxsize)
	{
		y = x - 3 * pow(cos(x + 1), 2);
		Array[i] = y;
	}
// Вывод значений массива
	for (i = 0;i < maxsize;i++)
	{
		printf("%.4f\n", Array[i]);
	}
// Вычисление среднего значения 
	for  (i = 0; i < maxsize; i++)
	{
	
		if (Array[i]>0)
		{
			srz += Array[i] / maxsize;
		}
	}
// Количество положительных и отрицательных элементов массива
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
// Сумма положительных и отрицательных элементов массива
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


	printf("Имя массива: %s\n", namearray); 
	printf("Cумма отрицательных элементов: %f\n", summinus);
	printf("Сумма положительных элементов: %f\n", sumplus);
	printf("Количество отрицательных элементов: %d\n", countminus); 
	printf("Количество положительных элементов: %d\n", countplus);
	printf("Среднее значение положительных элементов: %f\n", srz); 
}