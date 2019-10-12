//문제 1에서 num의 범위를 확인
#include <stdio.h>

int main(void)
{
	int num, i;

	printf("2부터 9 사이의 정수를 입력: ");
	scanf_s("%d", &num);

	while (num < 2 || num > 9)
	{
		printf("범위 밖이니 다시 입력: ");
		scanf_s("%d", &num);
	}

	for (i = 1; i < 10; i++) {
		printf("%d X %d = %d", num, i, num*i);
		puts("");
	}


	return 0;
}