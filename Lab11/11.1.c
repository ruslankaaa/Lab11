#include <stdio.h>
#include <locale.h>
#define maxsize 10

int mai1n()
{
	float a[maxsize];
	float b[maxsize];
	float temp;
	int i = 0;
	 
	setlocale(LC_CTYPE, "RUS"); 

	for (int i = 0; i < maxsize ; i++)
	{
		printf("a[%d]=", i + 1);
		scanf("%f", &temp);
		a[i] = temp;
	}

	for (int i = 0; i < maxsize ;i++)
	{
		b[i] = a[i];
	}

	for (int i = 0; i < maxsize ;i+=2)
	{
		b[i] += 1 ;
	}

	printf("| Индекс | Исходное значение | Новое значение | \n");
	for (i = 0;i < maxsize;i++)
	{
		printf("| %6d | %17.2f | %14.2f |\n", i, a[i], b[i]);
	}
}