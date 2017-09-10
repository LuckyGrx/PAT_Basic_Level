#include<iostream>
using namespace std;

int main()
{
	int number;
	char c;
	cin>>number>>c;
	double hangNature=number*0.5;
	for(int i=0;i<number;i++)
		cout<<c;
	cout<<endl;
	int hangNumber;
	if(hangNature-(int)hangNature>=0.5)
		hangNumber=(int)hangNature+1;
	else
		hangNumber=(int)hangNature;
	for(int i=0;i<hangNumber-2;i++)
	{
		cout<<c;
		for(int j=0;j<number-2;j++)
			cout<<" ";
		cout<<c<<endl;
	}
	for(int i=0;i<number;i++)
		cout<<c;
	return 0;
}