#include<iostream>
using namespace std;

int main()
{
	int hash[10]={0};
	for(int i=0;i<10;i++)
		cin>>hash[i];
	if(hash[0]!=0)
	{
		for(int i=1;i<10;i++){
			if(hash[i]!=0)
			{
				cout<<i;
				--hash[i];
				break;
			}
		}
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<hash[i];j++){
			cout<<i;
		}
	}

	return 0;


}
