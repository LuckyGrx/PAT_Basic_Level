#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	stack<char> s;
	int i, j, mark;
	if (a.size() > b.size()) {
		string tempB = "";
		for (int i = 0; i < a.size() - b.size(); i++)
			tempB += '0';
		b = tempB + b;
	}
	for (i = a.size() - 1, j = b.size() - 1, mark = 0; i >= 0&&j >= 0; i--, j--, mark++) {
		int temp;
		if (mark % 2 == 0) {
			temp = (a[i]-'0' + b[j]-'0') % 13;
			if (temp < 10)
				s.push(temp + '0');
			else if (temp == 10)
				s.push('J');
			else if (temp == 11)
				s.push('Q');
			else if (temp == 12)
				s.push('K');
		}else {
			temp = b[j] - a[i];
			if (temp < 0)
				s.push(temp + 10 + '0');
			else
				s.push(temp + '0');
		}
	}
	for (; j >= 0; j--)
		s.push(b[j]);
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
	cout << endl;
	return 0;
}