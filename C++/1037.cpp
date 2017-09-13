#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;

long long getThreeNumber(string s);
int main()
{
	string P,A;
	cin>>P>>A;
	int a=getThreeNumber(A)-getThreeNumber(P);
	int Galleon,Sickle,Knut;
	Galleon=a/(29*17);
	Sickle=(a-Galleon*29*17)/29;
	Knut=a-Galleon*29*17-Sickle*29;
	if(a>=0)
		cout<<Galleon<<"."<<Sickle<<"."<<Knut;
	else
		cout<<Galleon<<"."<<abs(Sickle)<<"."<<abs(Knut);
	return 0;
}

long long getThreeNumber(string s)
{
	string mark="";
	stringstream ss;
	long long returnNumber=0;
	int sign=0;
	long long can=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='.')
		{
			ss<<mark;
			ss>>can;
			if(sign==0)
				returnNumber+=can*17*29;
			else if(sign==1)
				returnNumber+=can*29;
			sign++;
			mark="";
			ss.clear();
			can=0;
		}
		else
			mark+=s[i];
	}
	ss<<mark;
	ss>>can;
	returnNumber+=can;
	ss.clear();
	return returnNumber;
}
