#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, string> m;
	for (int i = 0; i < n; i++) {
		string tempA,tempB;
		cin >> tempA>>tempB;
		m[tempA] = tempB;
		m[tempB] = tempA;
	}
	int t;
	cin>>t;
	string* a = new string[t];
	for (int i = 0; i < t; i++)
		cin >> a[i];
	sort(a, a + t);
	map <string, string> showMap;
	for (int i = 0; i < t; i++) {
		showMap[a[i]] = "1";
	}
	
	int mark = 0;
	string s = "";
	for (int i = 0; i < t; i++) {
		string tempString = "";
		if (showMap.count(m[a[i]]) == 0) {
			mark++;
			s += a[i] + " ";
		}
	}
	cout << mark << endl;
	if (s != "")
		cout << s.substr(0, s.size() - 1);
		
	return 0;
}