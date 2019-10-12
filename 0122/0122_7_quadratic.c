#include <stdio.h>
#include <math.h>

void getData(int *, int *, int *);
void printRes(int, int, int, int, double, double);
int quadratic(int, int, int, double *, double *);

int main(void)
{
	int a, b, c;
	double root1 , root2;
	int numRoots;
	
	getData(&a, &b, &c);

	numRoots = quadratic(a, b, c, &root1, &root2);
	
	printRes(numRoots, a, b, c, root1, root2);
	
	return 0;
}
void getData(int *pa, int *pb, int *pc)
{
	printf("Please enter coefficients a, b & c: ");
	scanf_s("%d %d %d", pa, pb, pc);
}
void printRes(int numRoots, int a, int b, int c, double root1, double root2)
{
	switch (numRoots)
	{
	case -1: printf("허수\n"); break;
	case 0:	printf("오류\n"); break;
	case 1: printf("%.3lf\n", root1); break;
	case 2: printf("%.3lf, %.3lf\n", root1, root2); break;
	default: break;
	}
}
int quadratic(int a, int b, int c, double *pRoot1, double *pRoot2)
{
	if (a == 0 && b == 0) {
		return 0;
	}
	else if (a == 0 && b != 0) {
		*pRoot1 = (-c) / b;
		return 1;
	}
	
	if ((b*b - 4 * a*c) >= 0) {
		*pRoot1 = (-b + sqrt((double) b*b - 4 * a*c)) / (2 * a);
		*pRoot2 = (-b - sqrt((double) b*b - 4 * a*c)) / (2 * a);
		return 2;
	}
	else if ((b*b - 4 * a*c) < 0) {
		return -1;
	}
}