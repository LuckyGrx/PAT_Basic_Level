#include<iostream>
using namespace std;

int main()
{
	int all[10]={0};
	for(int i=0;i<10;i++)
		cin>>all[i];
	if(all[0]!=0)
	{
		for(int i=1;i<10;i++)
			if(all[i]!=0)
			{
				cout<<i;
				all[i]--;
				break;
			}
	}

	for(int i=0;i<10;i++)
		for(int j=0;j<all[i];j++)
			cout<<i;


	return 0;


}