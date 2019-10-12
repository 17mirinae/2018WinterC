//n = input(1, INT_MAX);
//printf("%d\n", n);
//n의 각 자리수를 뒤에서부터 출력
//예: 123 입력시 3 2 1 출력

#include <stdio.h>
#include <limits.h>

int input(int, int);

int main(void)
{
	int n;

	n = input(1, INT_MAX);

	while (n != 0) {
		printf("%d ", n % 10);
		n = n / 10;
	}

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