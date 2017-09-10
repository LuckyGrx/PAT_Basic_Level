#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	double* a = new double[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	double sum = 0.0;
	for (int i = 0, j = n; i < n; i++, j--)
		sum += a[i] * j * ( i + 1 );
	printf("%.2f", sum);
	return 0;
}