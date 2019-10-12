#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[80];
	errno_t err;
	FILE* spOut;

	while (fgets(str, sizeof(str), stdin))
	if (isupper(*str)) fputs(str, stdout);

	return 0;
}