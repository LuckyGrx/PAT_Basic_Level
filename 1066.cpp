#include<iostream>
using namespace std;

int main() {
	int M, N, A, B, T;
	cin >> M >> N >> A >> B >> T;
	int** a = new int*[M];
	for (int i = 0; i < M; i++)
		a[i] = new int[N];
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			cin >> a[i][j];

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (a[i][j] >= A&&a[i][j] <= B) {
				if (T < 10)
					cout << "00" << T;
				else if (T >= 10 && T < 100)
					cout << "0" << T;
				else
					cout << T;
			}
			else {
				if (a[i][j] < 10)
					cout << "00" << a[i][j];
				else if (a[i][j] >= 10 && a[i][j] < 100)
					cout << "0" << a[i][j];
				else
					cout << a[i][j];
			}
			if (j != N - 1)
				cout << " ";
		}
		cout << endl;
	}

	return 0;
}