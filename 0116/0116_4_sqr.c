#include <stdio.h>

int getNum(void);
int sqr(int);
void printResult(int);

int main(void)
{
	int num, squa;

	num = getNum();
	squa = sqr(num);
	printResult(squa);

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
int sqr(int num)
{
	return num*num;
}
void printResult(int num)
{
	printf("�Էµ� ������ ������ %d�̴�.", num);
}