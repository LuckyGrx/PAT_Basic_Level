#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int count = 0;
	while(n!=1)
	{
		if(n%2==0)//ż��
			n=n/2;
		else//����
			n=(3*n+1)/2;
		count++;
	}
	cout<<count<<endl;
	return 0;
}