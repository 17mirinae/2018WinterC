//(1) 구구단 n단을 출력하는 함수를 정의
//(2) 그 함수를 이용하여 문제 3을 해결
#include <stdio.h>

void printGu(int);

int main(void)
{
	int num, i;

	printf("(4-1) 2부터 9 사이의 정수를 입력: ");
	scanf_s("%d", &num);

	while (num < 2 || num > 9)
	{
		printf("범위 밖이니 다시 입력: ");
		scanf_s("%d", &num);
	}

	printGu(num);
	puts("");

	printf("(4-2) 2~9단 출력\n\n");

	for (i = 2; i < 10; i++) {
		printGu(i);
		puts("");
	}

	return 0;
}
void printGu(int num)
{
	int i, j;

	for (i = 1; i < 10; i++) {
		printf("%d X %d = %d", num, i, num*i);
		puts("");
	}
}