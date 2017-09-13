#include<iostream>
#include<string>
#include<sstream>
using namespace std;
string mark[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };

int main()
{
	string str;
	cin >> str;
	int sum = 0;
	for (string::size_type i = 0; i < str.size(); i++)
		sum += str[i] - '0';

	stringstream ss;
	string sumString;
	ss << sum;
	ss >> sumString;
	ss.clear();
	int length = sumString.size();
	for (int i = 0; i < length; i++) {
		cout << mark[sumString[i] - '0'];
		if (i != length - 1)
			cout << " ";
	}
	cout << endl;
	return 0;
}
