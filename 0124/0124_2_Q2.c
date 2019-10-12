#include <stdio.h>

int main(void)
{
	char first[80];
	char last[80];
	int i, score;
	errno_t err;
	FILE* fp;

	err = fopen_s(&fp, "str.txt", "r");
	if (err == 0) {
		puts("Opening a file is successful!\n");
	}
	else
	{
		puts("Opening a file is failed.\n");
		return -1;
	}

	for (i = 0; i < 3; i++) {
		fscanf_s(fp, "%s", first, 80);
		fscanf_s(fp, "%s", last, 80);
		fscanf_s(fp, "%d", &score);
		printf("%s %s %3d\n", first, last, score);
	}
	
	printf("<<End of File>>\n");
	fclose(fp);

	return 0;
}