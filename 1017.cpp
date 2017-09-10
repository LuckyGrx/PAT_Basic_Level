#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	string A;
	int B;
	cin>>A>>B;
	string Q="";
	string temp = "";
	stringstream ss;
	bool isFirst = true;
	for (int i = 0; i < A.size(); i++) {
		temp += A[i];
		int tempInt;
		ss << temp;
		ss >> tempInt;
		ss.clear();
		if (tempInt / B < 1) {
			if (!isFirst) {
				Q += tempInt / B + '0';
				temp = tempInt % B + '0';
			}
		}
		else {
			isFirst = false;
			Q += tempInt / B + '0';
			temp = tempInt % B+'0';
		}
	}
	if (Q == "")
		cout << 0 << " ";
	else
		cout << Q<<" ";
	int R=0;
	for(int i=0;i<A.size();i++)
		R = (R * 10 + A[i] - '0') % B; 
	cout << R << endl;
	return 0;
}