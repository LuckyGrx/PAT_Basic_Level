#include<iostream>
using namespace std;

int main()
{
	int N,M;
	cin >> N >> M;
	int* array=new int[N*2];//设置成两倍长，便于一遍遍历出所需循环右移数据
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		array[N+i] = array[i] = temp;
	}
	int index = N - (M%N);
	for (int i = 0; i < N; i++) {
		cout << array[index + i];
		if (i != N - 1)
			cout << " ";
	}
	cout << endl;
	return 0;
}
