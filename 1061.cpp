#include<iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int* a = new int[M];
	for (int i = 0; i < M; i++)
		cin >> a[i];
	int* b = new int[M];
	for (int i = 0; i < M; i++)
		cin >> b[i];
	int* c = new int[N];
	for (int i = 0; i < N; i++)
		c[i] = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int d;
			cin >> d;
			if (d == b[j])
				c[i] += a[j];
		}
	}
	for (int i = 0; i < N; i++) {
		cout << c[i];
		if (i != N - 1)
			cout << endl;
	}
	return 0;
}