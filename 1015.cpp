#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
struct studentInfo {
	int id;
	int deScore;
	int caiScore;
};
bool cmp(studentInfo a, studentInfo b) {
	if (a.deScore + a.caiScore > b.deScore + b.caiScore)
		return true;
	else if (a.deScore + a.caiScore == b.deScore + b.caiScore) {
		if (a.deScore > b.deScore)
			return true;
		else if (a.deScore == b.deScore)
			return a.id < b.id;
		else
			return false;
	}
	else
		return false;
}

int main() {
	int N,L,H;
	scanf("%d %d %d",&N,&L,&H);
	vector<studentInfo> v1;
	vector<studentInfo> v2;
	vector<studentInfo> v3;
	vector<studentInfo> v4;
	int count = 0;
	for (int i = 0; i < N; i++) {
		int id , deScore, caiScore;
		scanf("%d %d %d",&id,&deScore,&caiScore);
		if (deScore >= L&&caiScore >= L) {
			count++;
			if (deScore >= H&&caiScore >= H)
				v1.push_back({ id,deScore,caiScore });
			else if (deScore >= H&&caiScore < H)
				v2.push_back({ id,deScore,caiScore });
			else if (deScore < H&&caiScore < H&&deScore >= caiScore)
				v3.push_back({ id,deScore,caiScore });
			else
				v4.push_back({ id,deScore,caiScore });
		}
	}
	sort(v1.begin(), v1.end(), cmp);
	sort(v2.begin(), v2.end(), cmp);
	sort(v3.begin(), v3.end(), cmp);
	sort(v4.begin(), v4.end(), cmp);
	printf("%d\n", count);
	for (int i = 0; i < v1.size(); ++i)
		printf("%d %d %d\n", v1[i].id, v1[i].deScore, v1[i].caiScore);
	for (int i = 0; i < v2.size(); ++i)
		printf("%d %d %d\n", v2[i].id, v2[i].deScore, v2[i].caiScore);
	for (int i = 0; i < v3.size(); ++i)
		printf("%d %d %d\n", v3[i].id, v3[i].deScore, v3[i].caiScore);
	for (int i = 0; i < v4.size(); ++i)
		printf("%d %d %d\n", v4[i].id, v4[i].deScore, v4[i].caiScore);
	return 0;
}