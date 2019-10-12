#include <stdio.h>
#include <limits.h>

int input(int, int);
int printInverse(int);

int main(void)
{
	int n, inv;

	n = input(1, INT_MAX);

	inv = printInverse(n);

	return 0;
}
int input(int low, int high)
{
	int num;

	do {
		printf("%d과 %d 사이의 자연수 입력: ", low, high);
		scanf_s("%d", &num);
	} while (num < low || num > high);

	return num;
}
int printInverse(int n)
{
	if (n < 1)
		return 1;
	else
		printf("%d ", n % 10);

	return printInverse(n / 10);
}