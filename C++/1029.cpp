#include<iostream>
#include<string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	int c[37] = { 0 };
	for (int i = 0; i<a.size(); i++){
		if (a[i] >= 'A'&&a[i] <= 'Z')
			c[a[i] - 'A']=1;
		else if (a[i] >= 'a'&&a[i] <= 'z')
			c[a[i] - 'a']=1;
		else if (a[i] >= '0'&&a[i] <= '9')
			c[a[i] - '0' + 26]=1;
		else
			c[36]=1;
	}
	for (int i = 0; i < b.size(); i++) {
		if (b[i] >= 'A'&&b[i] <= 'Z')
			c[b[i] - 'A']=0;
		else if (b[i] >= 'a'&&b[i] <= 'z')
			c[b[i] - 'a']=0;
		else if (b[i] >= '0'&&b[i] <= '9')
			c[b[i] - '0' + 26]=0;
		else
			c[36]=0;
	}
	for (int i = 0; i < a.size(); i++) {
		if (a[i] >= 'a'&&a[i] <= 'z'&&c[a[i] - 'a'] != 0) {
			a[i] -= 32;
			cout <<  a[i];
			c[a[i] - 'A'] = 0;
		}
		else if (a[i] >= 'A'&&a[i] <= 'Z'&&c[a[i] - 'A'] != 0) {
			cout << a[i];
			c[a[i] - 'A'] = 0;
		}
		else if (a[i] >= '0'&&a[i] <= '9'&&c[a[i] - '0'+ 26] != 0) {
			cout << a[i];
			c[a[i] - '0'+ 26] = 0;
		}
		else if (a[i] == '_'&&c[36] != 0) {
			cout << a[i];
			c[36] = 0;
		}
	}
	return 0;
}