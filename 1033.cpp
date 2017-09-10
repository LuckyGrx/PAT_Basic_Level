#include<iostream>
#include<string>
using namespace std;

int main()
{
	string wrong,write;
	getline(cin,wrong);
	getline(cin,write);
	int hash[41]={0};

	for(int i=0;i<wrong.size();i++)
	{
		if(wrong[i]>='0'&&wrong[i]<='9')
			hash[wrong[i]-'0']=-1;
		else if(wrong[i]>='A'&&wrong[i]<='Z')
			hash[wrong[i]-'A'+10]=-1;
		else if(wrong[i]=='_')
			hash[36]=-1;
		else if(wrong[i]==',')
			hash[37]=-1;
		else if(wrong[i]=='.')
			hash[38]=-1;
		else if(wrong[i]=='-')
			hash[39]=-1;
		else
			hash[40]=-1;
	}

	string returnString="";
	for(int i=0;i<write.size();i++)
	{
		if(write[i]>='0'&&write[i]<='9')
		{
			if(hash[write[i]-'0']==-1)
				continue;
			else
				returnString+=write[i];
		}
		else if(write[i]>='a'&&write[i]<='z')
		{
			if(hash[write[i]-'a'+10]==-1)
				continue;
			else
				returnString+=write[i];
		}
		else if(write[i]>='A'&&write[i]<='Z')
		{
			if(hash[40]==-1||hash[write[i]-'A'+10]==-1)
				continue;
			else
				returnString+=write[i];
		}
		else if(write[i]=='_')
		{
			if(hash[36]==-1)
				continue;
			else
				returnString+=write[i];
		}
		else if(write[i]==',')
		{
			if(hash[37]==-1)
				continue;
			else
				returnString+=write[i];
		}
		else if(write[i]=='.')
		{
			if(hash[38]==-1)
				continue;
			else
				returnString+=write[i];
		}
		else if(write[i]=='-')
		{
			if(hash[39]==-1)
				continue;
			else
				returnString+=write[i];
		}
		else
		{
			if(hash[40]==-1)
				continue;
			else
				returnString+=write[i];
		}
	}

	if(returnString=="")
		cout<<endl;
	else
		cout<<returnString;
	return 0;
}