#include <stdio.h>

struct frac{
	int numenator;
	int denomenator;
};
int main(void)
{	
	struct frac first, second, result;
	
	printf("ù ��° �м��� ���ڿ� �и� �Է�: ");
	scanf_s("%d %d", &first.numenator, &first.denomenator);
	
	printf("First Fraction: %d/%d\n", first);

	printf("�� ��° �м��� ���ڿ� �и� �Է�: ");
	scanf_s("%d %d", &second.numenator, &second.denomenator);
	
	printf("Second Fraction: %d/%d\n", second);

	result.numenator = first.numenator * second.numenator;
	result.denomenator = first.denomenator * second.denomenator;

	printf("The result of %d/%d * %d/%d is %d/%d\n", first, second, result);

	return 0;
}