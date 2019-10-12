#include <stdio.h>

int main(void)
{
	int a, b, sum;
	int *pa = &a, *pb = &b, *psum = &sum;	//&a=a의 주소 a=값을 저장하는 변수 *pa=a의 주소를 저장하는 변수

	printf("정수 두 개를 입력하시오: ");
	scanf_s("%d %d", &a, &b);

	*psum = *pa + *pb;

	printf("합은 %d이다.\n", *psum);

	return 0;
}