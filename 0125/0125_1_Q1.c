#include <stdio.h>

struct frac{
	int numenator;
	int denomenator;
};
int main(void)
{	
	struct frac first, second, result;
	
	printf("첫 번째 분수의 분자와 분모 입력: ");
	scanf_s("%d %d", &first.numenator, &first.denomenator);
	
	printf("First Fraction: %d/%d\n", first);

	printf("두 번째 분수의 분자와 분모 입력: ");
	scanf_s("%d %d", &second.numenator, &second.denomenator);
	
	printf("Second Fraction: %d/%d\n", second);

	result.numenator = first.numenator * second.numenator;
	result.denomenator = first.denomenator * second.denomenator;

	printf("The result of %d/%d * %d/%d is %d/%d\n", first, second, result);

	return 0;
}