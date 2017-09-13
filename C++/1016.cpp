#include<iostream>
#include<string>
#include<sstream>
using namespace std;

long long getAnswer(string a,int b);

int main()
{
	string a,b;
	int c,d;
	cin>>a>>c>>b>>d;
	cout<<getAnswer(a,c)+getAnswer(b,d);
	return 0;
}

long long getAnswer(string a,int b)
{
	int mark=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]-'0'==b)
			mark++;
	}
	string all="";
	char d=b+'0';
	for(int i=0;i<mark;i++)
	{
		all+=d;
	}
	if(all=="")
		return 0;
	stringstream ss;
	ss<<all;
	long long c;
	ss>>c;
	ss.clear();
	return c;
}