#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int a,b,d;
	cin>>a>>b>>d;
	int c=a+b;
	stack<int> s;

	while(1)
	{
		s.push(c%d);
		c/=d;
		if(c==0)
			break;
	}

	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}

	return 0;
}