#include<iostream>
#include<math.h>
#include<map>
using namespace std;
int M, N, TOL;
int dir[8][2] = { { -1, -1 },{ -1, 0 },{ -1, 1 },{ 0, -1 },{ 0, 1 },{ 1, -1 },{ 1, 0 },{ 1, 1 } };
bool judge(int** Array,int i, int j) {
	for (int k = 0; k < 8; k++) {
		int tx = i + dir[k][0];
		int ty = j + dir[k][1];
		if (tx >= 0 && tx < N && ty >= 0 && ty < M && abs(Array[i][j] - Array[tx][ty]) <= TOL)
			return false;
	}
	return true;
}

int main() {
	cin >> M >> N >> TOL;
	map<int,int> m;
	int** Array=new int*[N];
	for (int i = 0; i < N; ++i)
		Array[i] = new int[M];
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j) {
			cin >> Array[i][j];
			m[Array[i][j]]++;
		}
	int col, row;
	int count = 0;
	for (int i = 0; i < N; ++i) {
		for (int j =0; j < M; ++j) {
			if (m[Array[i][j]] == 1 && judge(Array,i, j)) {
				row = i+1;
				col = j+1;
				count++;
			}
		}
	}
	if (count == 0)
		cout << "Not Exist" << endl;
	else if (count >= 2)
		cout << "Not Unique" << endl;
	else
		cout << "(" << col << ", " << row << "): " << Array[row-1][col-1] << endl;
	return 0;
}