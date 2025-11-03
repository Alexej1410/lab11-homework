#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES 
#include <math.h>
#define N 10

void main()
{
	setlocale(LC_ALL, "RUS");
	int c=0, maxA=0;
	float A[N], temp;
	for (int i = 0; i < N; i++)
	{
		printf("A[%d] =", i);
		scanf("%f", &temp);
		A[i] = temp;
		if (A[i] > maxA)
			maxA = A[i];
	}
	for (int j = 0; j < N; j++)
	{
		if (A[j] == maxA)
			break;
		if (A[j] > 0)
			c++;
	}
	printf("количество положительных элементов массива до максимального равно %d", c);
}