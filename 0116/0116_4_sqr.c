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

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	return num;
}
int sqr(int num)
{
	return num*num;
}
void printResult(int num)
{
	printf("입력된 정수의 제곱은 %d이다.", num);
}