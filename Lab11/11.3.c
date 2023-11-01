#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_CTYPE, "RUS"); 


	int a[10];
	int i;
	int n=10; 
	int max_index = 0;
	int sum = 0;
	int count = 0;
	
	printf("Введите размер массива:\n");
	scanf("%d", &n);
	printf("Введите элементы массива:\n");

	for ( i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 1; i < n; i++) {
		if (a[i] > a[max_index]) {
			max_index = i;
		}
	}

	for (i = max_index + 1; i < n; i++) {
		if (a[i] < 0) {
			sum += a[i];
			count++;
		}
	}

	if (count > 0) {
		float average = (float)sum / count;
		printf("Среднее арифметическое отрицательных элементов после максимального элемента: %.2f\n", average);
	}
	else {
		printf("После максимального элемента нет отрицательных элементов\n");
	}





}