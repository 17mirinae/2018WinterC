//구구단 2~9단을 모두 출력
#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++)
			printf("%d X %d = %d\n", i, j, i*j);
		puts("");
	}

	return 0;

}