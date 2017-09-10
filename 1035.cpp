#include<iostream>
using namespace std;
bool insert(int* a,int* b,int n);
bool merge(int* a, int* b,int n);
bool isSameArray(int* a, int* b, int n);

int main() {
	int N;
	cin >> N;
	int* arrayA = new int[N];
	int* arrayB = new int[N];
	for (int i = 0; i < N; i++)
		cin >> arrayA[i];
	for (int i = 0; i < N; i++)
		cin >> arrayB[i];
	if (insert(arrayA, arrayB, N)) {
		cout << "Insertion Sort" << endl;
	}
	else {
		cout << "Merge Sort" << endl;
	}
	return 0;
}
bool isSameArray(int* a, int* b,int n) {
	for (int i = 0; i < n; ++i) {
		if (a[i] != b[i])
			return false;
	}
	return true;
}
bool insert(int* a,int* b,int n) {
	for (int i = 1; i < n; ++i) {
		int temp = a[i];
		int j = i;
		for (; j > 0; --j) {
			if (a[i] < a[j - 1])
				a[j] = a[j - 1];
			else
				break;
		}
		a[j] = temp;
		if (isSameArray(a, b, n))
			return true;
	}
	return false;
}
bool merge(int* a,int* b,int n) {
	return false;
}