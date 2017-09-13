#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int A,B,D;
	stack<int> s;
	while(cin>>A>>B>>D){
		int sum=A+B;
		do{
			s.push(sum%D);
			sum/=D;
		}while(sum);

		while(!s.empty())
		{
			cout<<s.top();
			s.pop();
		}
	}
	return 0;
}
