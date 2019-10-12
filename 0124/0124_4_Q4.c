#include <stdio.h>

int main(void)
{
	char str[]="Necessity is the mother of invention.";
	char *pStr = str;
	int i;

	fputs(pStr, stdout);

	puts("");

	for (i = 0; i < sizeof(str); i++) {
		fputs(pStr + i, stdout);
		puts("");
	}

	return 0;
}