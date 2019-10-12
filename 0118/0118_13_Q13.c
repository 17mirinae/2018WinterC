#include <stdio.h>
#include <limits.h>

int input(int, int);
int printInverse(int);

int main(void)
{
	int n;

	n = input(1, INT_MAX);

	printInverse(n);

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
	int i, m;
	int base = 1;

	m = n;
	
	if (n < 1)
		return 0;
	else {
		while (n > 0)
		{
			base = base * 10;
			n = n / 10;
		}

		base = base / 10;

		while (m > 0)
		{
			printf("%d ", m / base);
			m = m / base;
			base = base / 10;
		}
	}
}