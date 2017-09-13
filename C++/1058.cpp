#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
struct info {
	int fullScore;
	int allCount;
	int rightCount;
	map<char,int> m;
	int wrongCount;
	int index;
};
bool cmp(info a, info b) {
	if (a.wrongCount > b.wrongCount)
		return true;
	else if (a.wrongCount == b.wrongCount) {
		if (a.index < b.index)
			return true;
		else
			return false;
	}
	else
		return false;
}
int main() {
	int N, M;
	while (cin >> N >> M) {
		info* infos = new info[M];
		for (int i = 0; i < M; i++) {
			cin >> infos[i].fullScore >> infos[i].allCount >> infos[i].rightCount;
			infos[i].wrongCount = 0;
			infos[i].index = i + 1;
			for (int j = 0; j < infos[i].rightCount; j++) {
				char temp;
				cin >> temp;
				infos[i].m[temp]=1;
			}
		}
		cin.ignore();
		int* studentSocre = new int[N];
		for (int i = 0; i < N; i++)
			studentSocre[i] = 0;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				char c;
				cin >> c;//ÕýÀ¨ºÅ
				int number;
				cin >> number;
				int count = 0;
				for (int k = 0; k < number; k++) {
					cin >> c;
					if (infos[j].m.count(c) > 0)
						count++;
				}
				if (count == infos[j].rightCount&&count == number)
					studentSocre[i] += infos[j].fullScore;
				else
					infos[j].wrongCount++;
				cin >> c;//·´À¨ºÅ
			}
		}
		for (int i = 0; i < N; i++)
			cout << studentSocre[i] << endl;

		sort(infos, infos + M,cmp);
		

		if (infos[0].wrongCount == 0)
			cout << "Too simple" << endl;
		else {
			cout << infos[0].wrongCount << " " << infos[0].index;
			for (int i = 1; i < M; i++) {
				if (infos[i].wrongCount != infos[0].wrongCount)
					break;
				else {
					cout << " " << infos[i].index;
				}
			}
			cout << endl;
		}
	}
	return 0;
}