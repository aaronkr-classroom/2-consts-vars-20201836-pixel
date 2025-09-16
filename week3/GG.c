#include <stdio.h>
#include <math.h>

int main() {

	double P = 1000000;

	double r = 0.1;

	int n = 12;

	int t = 40;

	double A = P * pow((1 + r / n), Mul(n, t));

	printf("최종 금액 : % .2f 원\n", A);

	return 0;
}