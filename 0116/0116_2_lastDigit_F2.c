#include <stdio.h>

int getnum(void);

int main(void)
{
	int num;
	int onedigit;

	num = getnum();

	onedigit = num % 10;

	printf("입력된 정수의 오른쪽 끝자리수는 %d이다.", num);

	getchar();
	getchar();

	return 0;
}
int getnum(void)
{
	int num;

	printf("정수 하나를 입력하시오: ");
	scanf_s("%d", &num);

	return num;
}