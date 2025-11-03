<h1>Домашняя работа к лабораторной №11</h1>
<h2>Выполнил: Кравченко А.С.</h2>

<h1>Вариант 2</h1>
<h2>Условие задачи</h2>
С одномерным массивом, состоящим из n вводимых с клавиатуры положительных и отрицательных целых чисел выполнить следующие вычисления: количество положительных элементов массива, расположенных до
максимального элемента.

<h2>Алгоритм</h2>
1. Начало.<br>
2. Инициализируем переменные с, maxA, A[N], i, j.<br>
3. c=0, i=0, j=0, maxA=0<br>
4. Пока i < N:<br>
    - инициализируем переменную temp<br>
    - A[i] = temp<br>
    - если A[i] > maxA:<br>
      * maxA = a[i]<br>
    - i++<br>
5. Пока j < N:<br>
    - Если A[j] == maxA:<br>
      * break<br>
    - Если A[j] > 0:<br>
      * c++<br>
    - j++<br>
6. Выводим с.<br>
7. Конец.<br>

<h2>Код</h2>
#define _CRT_SECURE_NO_DEPRECATE<br>
#include <stdio.h><br>
#include <locale.h><br>
#define _USE_MATH_DEFINES<br> 
#include <math.h><br>
#define N 10<br>
<br>
void main()<br>
{<br>
	setlocale(LC_ALL, "RUS");<br>
	int c=0, maxA=0;<br>
	float A[N], temp;<br>
	for (int i = 0; i < N; i++)<br>
	{<br>
		printf("A[%d] =", i);<br>
		scanf("%f", &temp);<br>
		A[i] = temp;<br>
		if (A[i] > maxA)<br>
			maxA = A[i];<br>
	}<br>
	for (int j = 0; j < N; j++)<br>
	{<br>
		if (A[j] == maxA)<br>
			break;<br>
		if (A[j] > 0)<br>
			c++;<br>
	}<br>
	printf("количество положительных элементов массива до максимального равно %d", c);<br>
}<br>

<h2>Схема</h2>
<img width="395" height="805" alt="image" src="https://github.com/user-attachments/assets/c3fea695-ed27-4a81-a67d-43fc52b0b0ff" />

<h2>Консоль</h2>
<img width="850" height="313" alt="image" src="https://github.com/user-attachments/assets/999988e9-abde-4c0e-99e3-2d2cfa4b48d9" /><br>
<img width="822" height="314" alt="image" src="https://github.com/user-attachments/assets/f8d423a0-5958-4055-af0a-d2e45de14be3" />

