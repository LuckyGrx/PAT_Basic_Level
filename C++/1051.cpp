#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main() {
	double R1, P1, R2, P2;
	cin >> R1 >> P1 >> R2 >> P2;
	double A1 = R1*cos(P1);
	double B1 = R1*sin(P1);
	double A2 = R2*cos(P2);
	double B2 = R2*sin(P2);
	double A = A1*A2 - B1*B2;
	double B = A1*B2 + A2*B1;
	if (A + 0.005 >= 0 && A < 0)
		printf("0.00");
	else
		printf("%.2f", A);
	if (B >= 0)
		printf("+%.2fi", B);
	else if (B + 0.005 >= 0 && B < 0)
		printf("+0.00i");
	else
		printf("%.2fi", B);

	return 0;
}