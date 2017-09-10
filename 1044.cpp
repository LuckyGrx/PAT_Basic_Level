#include<iostream>
#include<string>
#include<sstream>
#include<queue>
#include<stack>
#include<map>
using namespace std;
string first[13] = { "tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec" };
string second[12] = { "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
map<string, int> m = { {"tret",0},{"jan",1},{"feb",2},{"mar",3},{"apr",4},{"may",5},{"jun",6},{"jly",7},{"aug",8},{"sep",9},{"oct",10},{"nov",11},{"dec",12},
								  {"tam",1*13},{"hel",2 * 13 },{"maa",3 * 13 },{"huh",4 * 13 },{"tou",5 * 13 },{"kes",6 * 13 },{"hei",7 * 13 },{"elo",8 * 13 },{"syy",9 * 13 },{"lok",10 * 13 },{"mer",11 * 13 },{"jou",12 * 13 }};

int main() {
	int n;
	cin >> n;
	cin.ignore();
	stringstream ss;
	queue<string> q;
	stack<int> s;
	for (int i = 0; i < n; i++) {
		string temp;
		getline(cin, temp);
		if (temp[0] >= '0'&&temp[0] <= '9') {
			int intTemp;
			ss << temp;
			ss >> intTemp;
			ss.clear();
			do {
				s.push(intTemp % 13);
				intTemp /= 13;
			} while (intTemp != 0);

			if (s.size() == 1) {
				q.push(first[s.top()]);
				s.pop();
			}
			else if (s.size() == 2) {
				string stringTemp = "";
				stringTemp += second[s.top() - 1]+" ";
				s.pop();
				stringTemp += first[s.top()];
				s.pop();
				q.push(stringTemp);
			}
		}else {
			int tempInt=0;
			string stringTemp;
			string tempString = "";
			for (int j = 0; j < temp.size(); j++) {
				if (temp[j] == ' ') {
					if (m.count(tempString) > 0)
						tempInt += m[tempString];
					tempString = "";
				}
				else
					tempString += temp[j];
			}
			if (m.count(tempString) > 0)
				tempInt += m[tempString];
			ss << tempInt;
			ss >> stringTemp;
			ss.clear();
			q.push(stringTemp);
		}
	}
	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
	return 0;
}