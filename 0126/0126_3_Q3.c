#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int numenator;
	int denomenator;
} FRACTION;
FRACTION *get_fr(void)
{
	FRACTION *frac = (FRACTION *)malloc(sizeof(FRACTION));
	printf("분수의 분자와 분모를 입력: ");
	scanf_s("%d %d", &(*frac).numenator, &(*frac).denomenator);
	return frac;
}
FRACTION *mul_frac(FRACTION fr1, FRACTION fr2)
{
	FRACTION *res = (FRACTION *)malloc(sizeof(FRACTION));
	(*res).numenator = fr1.numenator * fr2.numenator;
	(*res).denomenator = fr1.denomenator * fr2.denomenator;
	return res;
}
void print_frac(FRACTION fr1, FRACTION fr2, FRACTION res)
{
	printf("The result of %d/%d * %d/%d is %d/%d\n", fr1, fr2, res);
}
int main(void)
{
	FRACTION *res, *fr1, *fr2;

	fr1 = get_fr();
	fr2 = get_fr();

	res = mul_frac(*fr1, *fr2);
	print_frac(*fr1, *fr2, *res);

	return 0;
}