#include <stdio.h>

struct frac {
	int numenator;
	int denomenator;
};
frac get_fr(void)
{
	struct frac FRACTION;
	printf("분수의 분자와 분모 입력: ");
	scanf_s("%d %d", &FRACTION.numenator, &FRACTION.denomenator);
	return FRACTION;
}
frac mul_frac(frac fr1, frac fr2)
{
	frac result;
	result.numenator = fr1.numenator * fr2.numenator;
	result.denomenator = fr1.denomenator * fr2.denomenator;
	return result;
}
void print_frac(frac fr1, frac fr2, frac res)
{
	printf("The result of %d/%d * %d/%d is %d/%d\n", fr1, fr2, res);
}
int main(void)
{
	struct frac res;
	struct frac fr1, fr2;

	fr1 = get_fr();
	fr2 = get_fr();

	res = mul_frac(fr1, fr2);

	print_frac(fr1, fr2, res);

	return 0;
}