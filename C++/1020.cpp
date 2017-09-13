#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
struct info {
	double a;//库存量
	double b;//总售价
	double c;//单位售价
};
bool cmp(info a, info b) {
	return a.c > b.c;
}


int main() {
	int n, d;
	cin >> n >> d;
	info* infos = new info[n];
	for (int i = 0; i < n; i++)
		cin >> infos[i].a;
	for (int i = 0; i < n; i++)
		cin >> infos[i].b;
	for (int i = 0; i < n; i++)
		infos[i].c = infos[i].b / infos[i].a;
	sort(infos, infos + n, cmp);
	double result =0.0;
	for(int i=0;i<n;i++){
		if (infos[i].a > d) {
			result += infos[i].c*d;
			break;
		}
		else{
			d -=infos[i].a;
			result += infos[i].b;
		}
	}
	printf("%.2f\n", result);
	return 0;
}