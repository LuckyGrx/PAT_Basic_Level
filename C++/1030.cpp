#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main() {
	int N, P;
	scanf("%d %d",&N,&P);
	long long* array = new long long[N];
	for (int i = 0; i < N; i++)
		scanf("%lld",&array[i]);
	sort(array, array + N);

	int indexCount = 1;
	for (int i = 0; i < N; ++i) {
		for (int j = i + indexCount-1; j < N; ++j) {//因为  indexCount=j-i+1,所以j=i+indexCount-1;因为j>=0,所以indexCount初始化为1
			if (array[j] <= array[i] * P) {
				if(j-i+1>indexCount)
					indexCount = j - i + 1;
			}
			else
				break;
				
		}
	}
	printf("%d\n", indexCount);

	return 0;
}