#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	double max = 0.0;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (sqrt(a*a + b*b) > max)
			max = sqrt(a*a + b*b);
	}
	printf("%.2f\n", max);
	return 0;
}