#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[1001] = { 0 };
	stringstream ss;
	for (int i = 0; i < n; i++) {
		string b;
		int c;
		cin >> b >> c;
		int d;
		ss << b.substr(0, b.find('-'));
		ss >> d;
		ss.clear();
		a[d] += c;
	}
	int maxIndex = 1;
	for (int i = 2; i < 1001; i++) {
		if (a[i] > a[maxIndex])
			maxIndex = i;
	}
	cout << maxIndex << " " << a[maxIndex];
	return 0;
}