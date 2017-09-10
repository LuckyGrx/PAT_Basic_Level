#include<iostream>
#include<string>
using namespace std;

int main() {
	int number;
	cin >> number;
	int array[37] = { 0 };//
	for (int i = 0; i < number; i++) {
		string a;
		cin >> a;
		int b = 0;
		for (int j = 0; j < a.size(); j++) {
			int d = a[j] - '0';
			b += d;
		}
		array[b] = 1;
	}
	int mark=0;
	for (int i = 1; i < 37; i++) {
		if (array[i] != 0)
			mark++;
	}
	cout << mark << endl;
	string c="";
	for (int i = 1; i < 37; i++) {
		if (array[i] != 0) {
			c += to_string(i)+" ";
		}
	}
	cout << c.substr(0, c.size()-1);
	return 0;
}