#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ge=n%10;//个位
	int shi=(n/10)%10;//十位
	int bai=n/100;//百位

	for(int i=0;i<bai;i++)
		cout<<"B";
	for(int i=0;i<shi;i++)
		cout<<"S";
	for(int i=1;i<=ge;i++)
		cout<<i;
	return 0;
}
