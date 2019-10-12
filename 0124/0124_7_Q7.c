#include <stdio.h>

int main(void)
{
	char str[80];
	errno_t err;
	FILE* textIn;

	err = fopen_s(&textIn, "textIn.txt", "r");

	if (err == 0)
		puts("Opening a file is successful!\n");
	else {
		puts("Opening a file is failed.\n");
		return -1;
	}

	while (fgets(str, sizeof(str), textIn)) {
		fputs(str, stdout);
		putchar('\n');
	}

	return 0;
}