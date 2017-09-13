#include<iostream>
using namespace std;

int getBig(int number);
int getSmall(int number);
int main()
{
	int number;
	cin>>number;
	while(1)
	{
		if(getBig(number)==-1)
		{
			cout<<number<<" - "<<number<<" = 0000";
			break;
		}
		int c=getBig(number)-getSmall(number);
		if(getBig(number)<1000&&getBig(number)>=100)
			cout<<"0";
		else if(getBig(number)<100&&getBig(number)>=10)
			cout<<"00";
		else if(getBig(number)<10&&getBig(number)>=0)
			cout<<"000";
	
		cout<<getBig(number)<<" - ";

		if(getSmall(number)<1000&&getSmall(number)>=100)
			cout<<"0";
		else if(getSmall(number)<100&&getSmall(number)>=10)
			cout<<"00";
		else if(getSmall(number)<10&&getSmall(number)>=0)
			cout<<"000";

		cout<<getSmall(number)<<" = ";

		if(c<1000&&c>=100)
			cout<<"0";
		else if(c<100&&c>=10)
			cout<<"00";
		else if(c<10&&c>=0)
			cout<<"000";

		cout<<c;

		if(c==6174)
			break;
		number=c;
		cout<<endl;
	}
	return 0;
}

int getBig(int number)
{
	int a[4];
	a[0]=number%10;
	a[1]=(number/10)%10;
	a[2]=(number/100)%10;
	a[3]=(number/1000)%10;

	for(int i=0;i<4;i++)
	{
		for(int j=i;j<4;j++)
		{
			if(a[j]>a[i])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
		return -1;
	return a[0]*1000+a[1]*100+a[2]*10+a[3];

}

int getSmall(int number)
{
	int a[4];
	a[0]=number%10;
	a[1]=(number/10)%10;
	a[2]=(number/100)%10;
	a[3]=(number/1000)%10;

	for(int i=0;i<4;i++)
	{
		for(int j=i;j<4;j++)
		{
			if(a[j]<a[i])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	return a[0]*1000+a[1]*100+a[2]*10+a[3];
}