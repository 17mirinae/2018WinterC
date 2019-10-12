//2~9 사이 정수 num을 입력받아 구구단 num단을 출력
#include <stdio.h>

int main(void)
{
	int num, i;

	printf("2부터 9 사이의 정수를 입력: ");
	scanf_s("%d", &num);

	for (i = 1; i < 10; i++) {
		printf("%d X %d = %d", num, i, num*i);
		puts("");
	}
	
	
	return 0;
}