#include <stdio.h>

int getNum(void);
int firstDigit(int);
int addTwoDigit(int, int);
void printResult(int, int);

int main(void)
{
	int first = 0, second = 0;

	printResult(first, second);

	getchar();
	getchar();

	return 0;
}
int getNum(void)
{
	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	return num;
}
int firstDigit(int num)
{
	num = getNum();

	return num % 10;
}
int addTwoDigit(int first, int second)
{
	int num = 0;

	first = firstDigit(num);
	second = firstDigit(num);

	return first + second;
}
void printResult(int first, int second)
{
	int num;
	num = addTwoDigit(first, second);
	printf("�� ������ ���� �ڸ� ���� ���� %d�̴�.", num);
}