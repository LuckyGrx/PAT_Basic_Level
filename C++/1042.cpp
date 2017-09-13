#include<iostream>
#include<string>
using namespace std;

int main() {
	int a[26] = { 0 };
	string b;
	getline(cin, b);
	for (int i = 0; i < b.size(); i++) {
		if (b[i] >= 'a'&&b[i] <= 'z')
			a[b[i] - 'a']++;
		else if(b[i] >= 'A'&&b[i] <= 'Z')
			a[b[i] - 'A']++;
	}
	int maxIndex = 0;
	for (int i = 1; i < 26; i++) {
		if (a[i] > a[maxIndex])
			maxIndex = i;
	}
	char c = 'a'+maxIndex;
	cout << c << " " << a[maxIndex];
	return 0;
}