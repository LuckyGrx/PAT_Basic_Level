#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
map<int, bool> m;
void find(int n) {
	while (n != 1)
	{
		if (n % 2 == 0)//偶数
			n = n / 2;
		else//奇数
			n = (3 * n + 1) / 2;
		if (m.count(n) > 0)
			return;
		else
			m[n] = true;
	}
}
int main() {
	int K;
	cin >> K;
	int* array = new int[K];
	for (int i = 0; i < K; ++i)
		cin >> array[i];
	sort(array, array + K,cmp);
	for (int i = 0; i < K; i++)
		find(array[i]);
	bool isFirst = true;
	for (int i = 0; i < K; i++) {
		if (m.count(array[i]) == 0) {
			if (isFirst) {
				cout << array[i];
				isFirst = false;
			}else
				cout <<" "<< array[i];
		}
	}
	cout << endl;
	return 0;
}
