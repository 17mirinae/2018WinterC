#include <stdio.h>

int getNum(void);
int firstDigit(int);
int secondDigit(int);
int addTwoDigit(int);
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

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);


	return num;
}
int firstDigit(int num)
{
	return num % 10;
}
int secondDigit(int num)
{
	return (num % 100) / 10;
}
int addTwoDigit(int num)
{
	int first, second;

	num = getNum();

	first = firstDigit(num);
	second = secondDigit(num);
	
	return first + second;
}
void printResult(int num)
{
	num = addTwoDigit(num);

	printf("십의 자리 수와 일의 자리 수를 더하면 %d이다.", num);
}