#include<iostream>
#include<string>
using namespace std;

int main() {
	string pw;
	int N;
	cin >> pw >> N;
	cin.ignore();
	string temp;
	int count = 0;
	while (count < N) {
		getline(cin, temp);//temp可能含空格，故用getline
		if (temp == "#")
			return 0;
		else if (temp == pw) {
			cout << "Welcome in" << endl;;
			return 0;
		}else
			cout << "Wrong password: " << temp << endl;
		count++;
	}
	cout << "Account locked" << endl;
	return 0;
}