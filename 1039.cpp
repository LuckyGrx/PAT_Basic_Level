#include<iostream>
#include<string>
using namespace std;

int main()
{
	string give,want;
	cin>>give>>want;
	int hash[62]={0};

	for(int i=0;i<give.size();i++)
	{
		if(give[i]>='0'&&give[i]<='9')
			hash[give[i]-'0']++;
		else if(give[i]>='a'&&give[i]<='z')
			hash[give[i]-'a'+10]++;
		else
			hash[give[i]-'A'+36]++;
	}

	for(int i=0;i<want.size();i++)
	{
		if(want[i]>='0'&&want[i]<='9')
			hash[want[i]-'0']--;
		else if(want[i]>='a'&&want[i]<='z')
			hash[want[i]-'a'+10]--;
		else
			hash[want[i]-'A'+36]--;
	}

	int mark=0;
	int sign=0;
	for(int i=0;i<62;i++)
	{
		if(hash[i]<0)
			mark+=abs(hash[i]);
		else
			sign+=hash[i];
	}

	if(mark!=0)
		cout<<"No "<<mark;
	else
		cout<<"Yes "<<sign;


	return 0;
}