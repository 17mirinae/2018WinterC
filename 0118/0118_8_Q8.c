//n = input(1, INT_MAX);
//printf("%d\n", n);
//n�� �� �ڸ����� �ڿ������� ���
//��: 123 �Է½� 3 2 1 ���

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
		printf("%d�� %d ������ �ڿ��� �Է�: ", low, high);
		scanf_s("%d", &num);
	} while (num < low || num > high);

	return num;
}