#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	int sum = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'a'&&str[i] <= 'z')
			sum += str[i] - 'a' + 1;
		else if (str[i] >= 'A'&&str[i] <= 'Z')
			sum += str[i] - 'A' + 1;
	}
	int zero = 0;
	int one = 0;
	while (sum !=0) {
		int b = sum % 2;
		if (b == 0)
			zero++;
		else
			one++;
		sum /= 2;
	}
	cout << zero << " " << one<<endl;
	return 0;
}