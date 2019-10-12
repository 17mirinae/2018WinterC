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

	printf("정수를 입력하시오: ");
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
	printf("두 정수의 일의 자리 수의 합은 %d이다.", num);
}