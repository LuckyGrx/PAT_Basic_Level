#include<iostream>
using namespace std;

int main()
{
	long a,b;
	cin>>a>>b;
	long c=b-a;
	int hour,minute;
	double second;
	hour=c/(60*60*100);
	if(hour<10)
		cout<<"0"<<hour;
	else
	    cout<<hour;
	cout<<":";

	minute=(c-hour*60*60*100)/(60*100);
	if(minute<10)
		cout<<"0"<<minute;
	else
	    cout<<minute;
	cout<<":";

	second=(double)(c-hour*60*60*100-minute*60*100)/100;
	if(second-(int)second>=0.5)
	{
		int d=(int)second+1;
		if(d<10)
			cout<<"0"<<d;
		else
			cout<<d;
	}
	else
	{
		int d=(int)second;
		if(d<10)
			cout<<"0"<<d;
		else
			cout<<d;
	}
	return 0;
}