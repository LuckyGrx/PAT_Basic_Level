#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}

int main() {
	int N;
	scanf("%d",&N);
	int* array = new int[N+1];
	for (int i = 1; i <= N; ++i)
		scanf("%d",&array[i]);
	sort(array+1, array + N+1,cmp);
	int E=0;
	for (int i = 1; i <= N; i++)
		if (array[i] > i)   
			++E;
	printf("%d\n", E);
	return 0;
}