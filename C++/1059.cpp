#include<iostream>
#include<string>
#include<map>
#include<queue>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, string> m;
	for (int i = 1; i <= n; i++) {
		string temp;
		cin >> temp;
		if (i == 1) {
			m[temp] = "Mystery Award";
			continue;
		}
		bool isTrue = true;
		for (int j = 2; j <= i / 2; j++) {
			if (i%j == 0) {
				isTrue = false;
				break;
			}
		}
		if (isTrue)
			m[temp] = "Minion";
		else
			m[temp] = "Chocolate";
	}
	int k;
	cin >> k;
	queue<string> q;
	for (int i = 0; i < k; i++) {
		string temp;
		cin >> temp;
		if (m.count(temp) > 0) {
			if (m[temp] != "") {
				q.push(temp+": "+m[temp]);
				m[temp] = "";
			}
			else
				q.push(temp+": Checked");
		}
		else
			q.push(temp+": Are you kidding?");
	}
	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
	return 0;
}