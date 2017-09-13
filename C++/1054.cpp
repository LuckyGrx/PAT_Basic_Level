#include<iostream>
#include<string>
#include<sstream>
#include<stdio.h>
using namespace std;
stringstream ss;
bool isLegalNumber(string a);
bool isThreePoint(string a);
int getPointNumber(string a);
bool isAllNumber(string a);
bool isContainNumber(string a);

int main() {
	int n;
	cin >> n;
	string* a = new string[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	double sum = 0.0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (isLegalNumber(a[i])) {
			count++;
			double temp;
			ss << a[i];
			ss >> temp;
			sum += temp;
			ss.clear();
		}
		else {
			cout << "ERROR: " << a[i] << " is not a legal number" << endl;
		}
	}
	if (count >= 2) {
		printf("%s %d %s %.2f\n", "The average of", count, "numbers is", sum / count);
	}
	else if (count == 1) {
		printf("%s %d %s %.2f\n", "The average of", count, "number is", sum / count);
	}
	else{
		cout << "The average of 0 numbers is Undefined" << endl;
	}
	return 0;
}

bool isLegalNumber(string a) {
	if (getPointNumber(a) > 1)
		return false;
	else if (getPointNumber(a) == 1) {
		if (isThreePoint(a)) {
			if (isAllNumber(a)) {
				if (isContainNumber(a))
					return true;
				else
					return false;
			}
			else
				return false;
		}
		else
			return false;
	}
	else {
		if (isAllNumber(a)) {
			if (isContainNumber(a))
				return true;
			else
				return false;
		}
		else
			return false;
	}
}

bool isThreePoint(string a) {
	if (a.size() - a.find('.') > 3)
		return false;
	else
		return true;
}
int getPointNumber(string a) {
	int number = 0;
	for (int i = 0; i < a.size(); i++)
		if (a[i] == '.')
			number++;
	return number;
}
bool isAllNumber(string a) {
	if (a.size() > 1) {
		if (!(a[0] == '-' || a[0] == '+' || a[0] >= '0'&&a[0] <= '9' || a[0] == '.'))
			return false;
		for (int i = 1; i < a.size(); i++)
			if (!(a[i] >= '0'&&a[i] <= '9'||a[i]=='.'))
				return false;
		return true;
	}
	else {
		if ((a[0] >= '0'&&a[0] <= '9'))
			return true;
		else
			return false;
	}

}
bool isContainNumber(string a) {
	double tempDouble;
	ss << a;
	ss >> tempDouble;
	ss.clear();
	if (tempDouble <= 1000.0&&tempDouble >= -1000.0)
		return true;
	else
		return false;
}