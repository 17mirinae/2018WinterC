/*#include<stdio.h>

int is(int *);

int main(void)
{
	int isbn[10];
	int *pWalk, *pEnd;
	for (pWalk = isbn, pEnd = isbn + 10; pWalk<pEnd; pWalk++)
		scanf_s("%d", pWalk);
	printf("%d", is(isbn));

	return 0;
}
int is(int *isbn)
{
	int *pWalk, *pEnd;
	int num = 10, sum = 0;
	for (pWalk = isbn, pEnd = isbn + 10; pWalk<pEnd; pWalk++)
	{
		*pWalk *= num;
		num--;
		sum += *pWalk;
	}
	if (sum % 11 == 0)
		return 1;
	else
		return 0;
}

//���ڵ�(ISBN) �ѹ��� �³�1 Ʋ����0  11�� �������� ÷���ں��� ���ϱ� 10 9 8 7 6 5 4 3 2 1*/
#include <stdio.h>

int isbnTest(int *);

int main(void)
{
	int num[10];
	int *numAry = num;

	for (numAry = num; numAry < num + 10; numAry++) {
		printf("�Է� ����: ");
		scanf_s("%d", numAry);
	}
	printf("%d\n", isbnTest(num));
	
	puts("");

	return 0;
}
int isbnTest(int *p)
{
	int *k = p;
	int mul = 10, sum = 0;

	for (k = p; k < p + 10; k++) {
		sum += (*k) * mul;
		mul--;
	}
	
	if (sum % 11 == 0)
		return 1;
	else
		return 0;
}