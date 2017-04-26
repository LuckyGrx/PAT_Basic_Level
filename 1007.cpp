#include<iostream>
#include<math.h>
using namespace std;
const int Max=100000;
bool indexArray[Max];
int primeArray[Max];//素数数组

void init() {//筛数法 初始化
	indexArray[1] = false;
	indexArray[2] = true;
	for (int i = 3; i < Max; i++)
		indexArray[i] = i % 2 == 0 ? false : true;
	for (int i = 3; i <= (int)sqrt(Max); i++) {
		if (indexArray[i]) {
			for (int j = i * i; j < Max; j += i)
				indexArray[j] = false;
		}
	}
	int index = 0;
	for (int i = 1; i < Max; i++) {
		if (indexArray[i])
			primeArray[index++] = i;
	}
}

int main() {
	int n;
	cin >> n;
	init();

	int count = 0;
	for (int i = 0; primeArray[i] <= n; i++) {
		if (primeArray[i + 1]<=n&&primeArray[i + 1] - primeArray[i] == 2)
			count++;
	}
	cout << count << endl;
	return 0;
}
