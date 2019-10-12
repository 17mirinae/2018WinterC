#include <stdio.h>

int main(void)
{
	char str[80];

	printf("Please enter a string: ");
	fgets(str, sizeof(str), stdin); //세 번째 인자가 stdin이어서 화면에서 입력을 받는다.

	printf("Here is your string: %s\n", str);

	return 0;
}