#include<iostream>
#include<string>
using namespace std;
struct studentInfo {
	string id;
	int a;
	int b;
};

int main() {
	int number;
	cin >> number;
	studentInfo* studentInfos = new studentInfo[number];
	for (int i = 0; i < number; i++) {
		cin >> studentInfos[i].id >> studentInfos[i].a >> studentInfos[i].b;
	}
	int c;
	cin >> c;
	int* d = new int[c];
	for (int i = 0; i < c; i++)
		cin >> d[i];
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < number; j++) {
			if (studentInfos[j].a == d[i]) {
				cout << studentInfos[j].id << " " << studentInfos[j].b;
				break;
			}
		}
		if (i != c - 1)
			cout << endl;
	}
	return 0;
}