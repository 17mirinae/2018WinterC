#include <stdio.h>

int getNum(void);
int subNum(int, int);
void printResult(int);

int main(void)
{
	int num = 0;

	printResult(num);

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
int subNum(int first, int second)
{
	if (first <= second)
		return second - first;
	else
		return first - second;
}
void printResult(int result)
{
	int first, second;

	first = getNum();
	second = getNum();

	result = subNum(first, second);

	printf("�� ������ ���� %d�̴�.", result);
}