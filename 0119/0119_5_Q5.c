#include <stdio.h>

float calAve(int data[], int);

int main(void)
{
	int data[10] = { 12, 8, 5, 16, 31, 27, 41, 1, 19, 12 };
	float ave;

	ave = calAve(data, 10);

	return 0;
}
float calAve(int data[], int num)
{
	int i, sum = 0;

	for (i = 0; i < num; i++)
		sum += data[i];

	return sum / num;
}