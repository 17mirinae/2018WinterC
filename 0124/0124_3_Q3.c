#include <stdio.h>

int main(void)
{
	char str[80];

	printf("Please enter a string: ");
	fgets(str, sizeof(str), stdin); //�� ��° ���ڰ� stdin�̾ ȭ�鿡�� �Է��� �޴´�.

	printf("Here is your string: %s\n", str);

	return 0;
}