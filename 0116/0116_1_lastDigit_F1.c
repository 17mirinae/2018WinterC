#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하여라: ");
	scanf_s("%d", &num);

	printf("정수의 오른쪽 끝자리수는 %d이다.", num % 10);

	getchar();
	getchar();

	return 0;
}