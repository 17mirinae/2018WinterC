#include <stdio.h>
#include <limits.h>

int input(int, int);
int fact_loop(int);

int main(void)
{
	int n, loop, i;

	n = input(1, INT_MAX);

	for (i = 0; i <= n; i++) {
		printf("%d!=%d\n", i, fact_loop(i));
	}

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
int fact_loop(int n)
{
	if (n == 0)
		return 1;
	else
		return n*fact_loop(n - 1);
}