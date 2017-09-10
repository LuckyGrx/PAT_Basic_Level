#include<iostream>  
#include<stdlib.h>  
#include<stdio.h>  
using namespace std;
const int MAX_N = 1000000001;

int main() {
	int N;
	scanf("%d", &N);
	int* array = new int[N];
	bool* isPar = new bool[N];

	for (int i = 0; i < N; i++) {
		scanf("%d", &array[i]);
		isPar[i] = true;
	}
	int max = array[0];
	int min = array[N - 1];
	for (int i = 0, j = N - 1; i < N, j >= 0; i++, j--) {
		if (array[i] >= max)
			max = array[i];
		else
			isPar[i] = false;

		if (array[j] <= min)
			min = array[j];
		else
			isPar[j] = false;
	}
	int count = 0;
	for (int i = 0; i < N; i++)
		if (isPar[i])
			count++;
	printf("%d\n", count);
	for (int i = 0; i < N; i++) {
		if (isPar[i]) {
			printf("%d", array[i]);
			if (--count > 0)
				printf(" ");
		}
	}
	printf("\n");
	return 0;
}