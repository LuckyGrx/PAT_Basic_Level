#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* array = new int[n];
	for (int i = 0; i < n; i++)
		cin >> array[i];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j)
				sum += array[i] * 10 + array[j];
		}
	}
	cout << sum << endl;
	return 0;
}