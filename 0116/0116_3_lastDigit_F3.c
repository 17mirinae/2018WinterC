#include <stdio.h>

int getNum(void);
void lastDigit(int);

int main(void)
{
	int getnum;

	getnum = getNum();

	lastDigit(getnum);

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
void lastDigit(int num)
{
	printf("입력된 정수의 오른쪽 끝자리수는 %d이다.", num % 10);
}