//(1) 자연수 n(범위확인)을 입력받음
//(2) 1부터 n까지 합을 계산
//(3) 합을 출력
#include <stdio.h>

int main(void)
{
	int n, sum = 0, i;

	do {
		printf("자연수 n을 입력: ");
		scanf_s("%d", &n);
	} while (n < 1);
	
	for (i = 1; i <= n; i++)
		sum += i;

	printf("합: %d\n\n", sum);

	return 0;
}  