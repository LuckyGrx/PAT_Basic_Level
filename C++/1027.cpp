#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	char c;
	cin >> n;
	cin >> c;
	int sum = 1;
	int i;
	for (i = 3;; i = i + 2) {
		if (sum > n)
			break;
		else
			sum += i * 2;
	}
	int remain;
	int remainSum = 0;
	for (int j = 1; j < i-2; j = j + 2)
		remainSum += j * 2;
	remain = n - remainSum + 1;
	int mark = 0;
	while (i - 4 - 2 * mark != 1) {
		for (int j = 0; j < mark; j++)
			cout << " ";
		for (int j = 0; j < i - 4 - 2 * mark; j++)
			cout << c;
		mark++;
		cout << endl;
	}
	do {
		for (int j = 0; j < mark; j++)
			cout << " ";
		for (int j = 0; j < i - 4 - 2 * mark; j++)
			cout << c;
		mark--;
		cout << endl;
	} while (mark!=-1);
	cout << remain << endl;
	return 0;
}