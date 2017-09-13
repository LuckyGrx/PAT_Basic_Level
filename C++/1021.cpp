#include<iostream>
#include<string>
using namespace std;
const int N = 10;

int main()
{
	string str;
	cin>> str;
	int countHash[N]={0};
	for(int i=0;i<str.size();i++)
		countHash[str[i]-'0']++;

	for(int i=0;i<N;i++)
		if(countHash[i]!=0)
			cout << i << ":" << countHash[i] << endl;
	return 0;
}