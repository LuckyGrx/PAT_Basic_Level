#include <iostream>  
#include <string>  
using namespace std;
int main() {
	string str;
	cin >> str;
	int numT = 0;
	int numAT = 0;
	int numPAT = 0;
	int length = str.size() - 1;
	for (int i = length; i >= 0; --i) {  
		if (str[i] == 'T')
			++numT;
		else if (str[i] == 'A')   
			numAT = (numAT + numT) % 1000000007;
		else 
			numPAT = (numPAT + numAT) % 1000000007;
	}
	cout << numPAT << endl;
	return 0;
}