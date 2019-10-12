#include <stdio.h>

int main(void)
{
	char arr[10];
	char *pary;
	char *pEnd = &arr[9];

	printf("10개 문자 입력: ");

	for (pary = arr; pary <= pEnd; pary++)
		scanf_s(" %c", pary);

	for (pary = arr; pary <= pEnd; pary++)
		printf("%c ", *pary);

	return 0;
}