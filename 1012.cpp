#include<iostream>
#include<string>
using namespace std;

int main()
{
	int number;
	cin>>number;
	int* allNumber=new int[number];
	for(int i=0;i<number;i++)
		cin>>allNumber[i];

	int a1=0;
	bool isGet1=false;
	for(int i=0;i<number;i++)
	{
		if(allNumber[i]%5==0&&allNumber[i]%2==0)
		{
			a1+=allNumber[i];
			isGet1=true;
		}
	}
	if(isGet1)
		cout<<a1<<" ";
	else
		cout<<"N"<<" ";

	int a2=0;
	int mark=0;
	bool isGet2=false;
	for(int i=0;i<number;i++)
	{
		if(allNumber[i]%5==1)
		{
			if(mark%2==0)
				a2+=allNumber[i];
			else
				a2-=allNumber[i];
			mark++;
			isGet2=true;
		}
	}
	if(isGet2)
		cout<<a2<<" ";
	else
		cout<<"N"<<" ";

	int a3=0;
	for(int i=0;i<number;i++)
	{
		if(allNumber[i]%5==2)
			a3++;
	}
	if(a3!=0)
		cout<<a3<<" ";
	else
		cout<<"N"<<" ";

	int a4=0;
	mark=0;
	bool isGet3=false;
	for(int i=0;i<number;i++)
	{
		if(allNumber[i]%5==3)
		{
			a4+=allNumber[i];
			mark++;
			isGet3=true;
		}
	}
	double sign=(double)a4/mark;
	if(isGet3)
		printf("%.1f",sign);
	else
		cout<<"N";
	cout<<" ";

	int max=0;
	bool isGet4=false;
	for(int i=0;i<number;i++)
	{
		if(allNumber[i]%5==4)
		{
			if(!isGet4)
			{
				max=allNumber[i];
				isGet4=true;
			}
			else
			{
				if(allNumber[i]>max)
					max=allNumber[i];
			}
		}
	}
	if (isGet4)
		cout<<max;
	else
		cout<<"N";


	return 0;
}