#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n, d;
	double e;
	cin >> n >> e >> d;
	double mark1 = 0.0;
	double mark2 = 0.0;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		double sign = 0.0;
		for (int j = 0; j < k; j++) {
			double temp;
			cin >> temp;
			if (temp < e)
				sign++;
		}
		if (sign > (double)k / 2.0) {
			if (k > d)
				mark2++;
			else
				mark1++;
		}
	}
	printf("%.1f%c %.1f%c\n", mark1 * 100 / n,'%', mark2 * 100 / n,'%');
	return 0;
}