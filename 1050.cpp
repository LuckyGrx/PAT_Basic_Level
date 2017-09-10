#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}

int main() {
	int N;
	cin >> N;
	int temp = (int)sqrt(N);
	int m, n;
	if (temp*temp == N) {
		m = n = temp;
	}else {
		m = temp + 1;
		n = temp;
	}
	int* a = new int[N];
	for (int i = 0; i < N; i++)
		cin >> a[i];
	sort(a, a + N,cmp);

	int** twoArray = new int*[m];
	for (int i = 0; i < m; i++)
		twoArray[i] = new int[n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			twoArray[i][j] = 0;
	//cout << m << " " << n << endl;
	int i=0, j=0, k=0;
	twoArray[i][j] = a[k++];//首先为了以后赋值方便先将第一个元素赋值
	while (k<N) {     //需要赋值N次
		while (j + 1<n && !twoArray[i][j + 1])    
			twoArray[i][++j] = a[k++];//先往右，如果小于边界值并且没有赋值过，则赋值
		while (i + 1<m && !twoArray[i + 1][j])    
			twoArray[++i][j] = a[k++];//再往下，如果小于边界值并且没有赋值过，则赋值
		while (i - 1 >= 0 && !twoArray[i - 1][j])   
			twoArray[--i][j] = a[k++];//再往左，如果小于边界值并且没有赋值过，则赋值
		while (j - 1 >= 0 && !twoArray[i][j - 1])   
			twoArray[i][--j] = a[k++];//再往上，如果小于边界值并且没有赋值过，则赋值
	}//至于为什么要用++j，因为如果是j++，往下的时候，j需要减一，造成了后续的繁琐

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << twoArray[i][j];
			if(j!=n-1)
				cout<< " ";
		}
		cout << endl;
	}
	return 0;
}