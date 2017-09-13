#include<iostream>
#include<string>
using namespace std;

bool getId(string id);
int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char m[11]={'1',' 0',' X',' 9',' 8',' 7',' 6', '5',' 4', '3', '2'};

int main()
{
	int number;
	cin>>number;
	int mark=0;
	int sign=0;
	string* allWord=new string[number];
	for(int i=0;i<number;i++)
	{
		string id;
		cin>>id;
		if(getId(id))
			mark++;
		else
		{
			allWord[sign]=id;
			sign++;
		}
		
	}
	if(mark==number)
		cout<<"All passed";
	else
	{
		for(int i=0;i<sign-1;i++)
			cout<<allWord[i]<<endl;
		cout<<allWord[sign-1];
	}

}

bool getId(string id)
{
	int all=0;
	for(int i=0;i<id.size()-1;i++)
	{
		if(id[i]<='9'&&id[i]>='0')
		{
			all+=(id[i]-'0')*a[i];
		}else
			return false;
	}

	int z=all%11;
	if(id[17]==m[z])
		return true;
	else
		return false;
}