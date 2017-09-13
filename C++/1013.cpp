#include<iostream>
using namespace std;
const int END=104730;//第10000个素数是104729
//筛选法
int main()
{
	int M,N;
	cin>>M>>N;
	int a[END],i,j;
	for(int i=1;i<END;i++)
		a[i]=1;

	for(i=2;i<END;i++)
	{
		if(a[i]!=0)
		{
			for(j=i*2;j<END;j=j+i)
				a[j]=0;
		}
	}

	int mark=0;
	for(int i=2;i<END;i++)
	{
		if(a[i]!=0)
		{
			mark++;
			if(mark>=M&&mark<=N)
			{
				cout<<i;
				if((mark-M+1)%10==0&&(mark-M)!=0&&mark!=N)
					cout<<endl;
				else
				{
					if(mark!=N)
						cout<<" ";
				}
			}
		}
	}
	return 0;
}