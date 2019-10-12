//(1) 1부터 n까지 합을 계산하는 함수를 정의
//(2) 자연수 n(범위확인)을 입력받음
//(3) 그 함수를 이용하여 합을 계산
//(4) 합을 main 함수에서 출력
#include <stdio.h>

int add(int);

int main(void)
{
	int n, sum = 0, i;

	do {
		printf("자연수 n을 입력: ");
		scanf_s("%d", &n);
	} while (n < 1);

	sum = add(n);

	printf("합: %d\n\n", sum);

	return 0;
}
int add(int num)
{
	int i, sum = 0;

	for (i = 1; i <= num; i++)
		sum += i;

	return sum;
}