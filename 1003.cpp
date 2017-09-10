#include<iostream>
#include<string>
using namespace std;

void getYesOrNo(string pat);
int main()
{
	int number=0;
	cin>>number;
	for(int i=0;i<number;i++)
	{
		string pat;
		getline(cin,pat);
		getYesOrNo(pat);
	}
}

void getYesOrNo(string pat)
{
	for(int i=0;i<pat.size();i++)
	{
		if(pat[i]!='P'||pat[i]!='A'||pat[i]!='T')
		{
			cout<<"NO"<<endl;
			break;
		}
	}
}