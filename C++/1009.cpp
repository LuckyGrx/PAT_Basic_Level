#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	while(getline(cin,str)){
		reverse(str.begin(),str.end());
		unsigned i=0,j=i;
		while(i<str.size()){
			while(i<str.size()&&str[i]!=' ')
				++i;
			reverse(str.begin()+j,str.begin()+i);
			j=++i;
		}
		cout<<str<<endl;
	}
	return 0;
}
