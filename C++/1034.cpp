#include<iostream>
#include<string>
#include<sstream>
using namespace std;
string getJian(string a,string b) {
	stringstream ss;
	int aInt, bInt;
	ss << a;
	ss >> aInt;
	ss.clear();
	ss << b;
	ss >> bInt;
	ss.clear();

}

int main()
{
	string a, b;
	cin >> a >> b;
	
	string a1, a2, b1, b2;
	a1 = a.substr(0, a.find('/'));
	a2 = a.substr(a.find('/') + 1);
	b1 = b.substr(0, b.find('/'));
	b2 = b.substr(b.find('/') + 1);
	return 0;
}