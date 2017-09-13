#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	string A;
	cin >> A;
	bool isPositive = A[0] == '+' ? true : false;
	int pointIndex = A.find('.');
	int eIndex = A.find('E');
	bool isPower = A[eIndex + 1] == '+' ? true : false;
	stringstream ss;
	int power;
	ss << A.substr(eIndex + 2);
	ss >> power;
	ss.clear();

	if (isPower) {

	}
	else {

	}


	return 0;
}