#include<iostream>
#include<string>
using namespace std;
string day[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
int main() {
	string a, b, c, d;;
	cin >> a >> b >> c >> d;
	bool isFirst = true;
	bool isSecond = false;
	for (int i = 0, j = 0; i < a.size(), j < b.size(); i++, j++) {
		if (i == a.size() || j == b.size())
			break;
		if (a[i] == b[j]) {
			if (isSecond) {
				if (a[i] >= 'A'&&a[i] <= 'N') {
					cout << 10 + a[i] - 'A' << ":";
					break;
				}
				else if (a[i] >= '0'&&a[i] <= '9') {
					cout << "0" << a[i] << ":";
					break;
				}
				
			}

			if (isFirst) {
				if (a[i] >= 'A'&&a[i] <= 'G') {
					cout << day[a[i] - 'A'] << " ";
					isFirst = false;
				    isSecond = true;
				}
			}
		}
	}
	for (int i = 0, j = 0; i < c.size(), j < d.size(); i++, j++) {
		if (i == c.size() || j == d.size())
			break;
		if (c[i] == d[j]&&(c[i] >= 'A'&&c[i] <= 'Z'|| c[i] >= 'a'&&c[i] <= 'z')) {
			if (i < 10)
				cout << "0" << i;
			else
				cout << i;
			break;
		}
	}
	cout << endl;
	return 0;
}