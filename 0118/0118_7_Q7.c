#include <stdio.h>

int input(int, int);

int main(void)
{
	int n;

	n = input(1, 100);

	return 0;
}
int input(int low, int high)
{
	int num;

	do {
		printf("1~100 사이의 자연수 입력: ");
		scanf_s("%d", &num);
	} while (num < low || num > high);

	return num;
}