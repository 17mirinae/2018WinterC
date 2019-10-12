#include <stdio.h>

int main(void)
{
	char str[80];
	errno_t err;
	FILE* spOut;

	err = fopen_s(&spOut, "spOut.txt", "w");

	if (err == 0)
		puts("Opening a file is successful!\n");
	else {
		puts("Opening a file is failed.\n");
		return -1;
	}

	fgets(str, sizeof(str), stdin);

	fputs(str, spOut);

	fclose(spOut);

	return 0;
}