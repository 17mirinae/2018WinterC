#include <stdio.h>
#include <limits.h>

int input(int, int);
int fibo(int);

int main(void)
{
	int n, loop, i;

	n = input(1, INT_MAX);

	for (i = 1; i <= n; i++)
		printf("%d\n", fibo(i));

	return 0;
}
int input(int low, int high)
{
	int num;

	do {
		printf("%d~%d 사이의 자연수 입력: ", low, high);
		scanf_s("%d", &num);
	} while (num < low || num > high);

	return num;
}
int fibo(int n)
{
	if (n < 3)
		return 1;
	else
		return fibo(n - 2) + fibo(n - 1);
}