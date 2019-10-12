#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char str[] = "sum = sum + 10;";
	char *pToken;

	pToken = strtok_s(str, " ;", NULL);

	while (pToken) {
		printf("%s", pToken);
		pToken = strtok_s(NULL, " ;", NULL);
	}

	return 0;
}