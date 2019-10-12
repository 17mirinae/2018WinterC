#include <stdio.h>

int main(void)
{
	int a = 14;
	int *p = &a;	//포인터 p에다가 a의 주소를 대입

	printf("%d\t%d\n", a, &a);
	printf("%d\t%d\n\n", p, *p);	//첫 번째 p는 그냥 p의 값(a의 주소)
									//두 번째 *p는 p가 가지고 있는 주소(a의 주소)에 있는 값(a의 값)

	return 0;
}