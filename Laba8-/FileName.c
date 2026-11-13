#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int Task1();
int Task1A();
int Task2();
int main() {
	setlocale(LC_ALL, ".UTF-8");
	int count;
	char symbol;

	printf("Введите количество символов: ");
	scanf("%d", &count);

	printf("Введите символ для печати:");
	scanf(" %c", &symbol);

	for (int start = 1; start <= count; start++) {
		putchar(symbol);
	}
	printf("\n");

	Task1();
	Task1A();
	Task2();
	return 0;
}

int Task1() {

	int n, m;
	int s = 0;
	int k = 0;
	printf("Введите значение m:");
	scanf("%d", &m);
	printf("Введите значение n. При условии (n<m):");
	scanf("%d", &n);

	for (int i = m; i >= n; i--) {
		s += i;
		printf("Выполнено %d раз\n", ++k);
	}
	printf("Результат %d\n", s);

	return 0;
}
Task1A() {
	int n;
	printf("Введите степень n:");
	scanf("%d", &n);
	long long power = 1;

	//Пункты 1, 2, 3:
	for (int i = 0; i <= n;i++) {
		printf("2^%2d = %10d\n", i, power);
		power *= 2;
	}

	return 0;
}

int Task2() {
	double start = 0.1;
	double end = 2.1;
	double step;
	double x, y;

	printf("Программа табулирования функции: y = x^2+ sin(5x)\n");
	printf("Интервал: [%.1f; %.1f]\n", start, end);
	printf("Введите шаг табуляции:");
	scanf("%lf", &step);
	if (step <= 0) {
		printf("Ошибка: шаг должен быть больше нуля\n");
		return 0;
	}
	printf("\n------------------\n");
	printf("|   x  |  f(x)  |   \n");
	printf("\n------------------\n");

	for (x = start; x <= end + 0.0001; x += step) {
		y = (x * x) + sin(5 * x);
		printf("| %5.2lf |  %7.4lf |\n", x, y);
	}

	printf("--------------\n");

	return 0;
}
