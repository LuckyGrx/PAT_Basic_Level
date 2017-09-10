#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int number1 = 0;
	int number2 = 0;
	for (int i = 0; i < n; i++) {
		int a[4];
		for (int j = 0; j < 4; j++)
			cin >> a[j];
		if (a[1] == a[0] + a[2] && a[3] != a[0] + a[2])//¼×Ó®
			number1++;
		else if (a[3] == a[0] + a[2] && a[1] != a[0] + a[2])
			number2++;
	}
	cout << number2 << " " << number1;
	return 0;
}