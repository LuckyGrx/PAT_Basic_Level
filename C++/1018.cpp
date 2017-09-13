#include<iostream>
using namespace std;

int main()
{
	int number;
	cin>>number;
	int jia[3]={0};//Ê¤¡¢Æ½¡¢¸º
	int jiaSheng[3]={0};
	int yiSheng[3]={0};
	for(int i=0;i<number;i++)
	{
		char a,b;
		cin>>a>>b;
		if(a==b)
		{
			jia[1]++;
		}else if((a=='B'&&b=='J')||(a=='J'&&b=='C')||(a=='C'&&b=='B'))//ÒÒÊ¤
		{
			jia[2]++;
			if(b=='B')
				yiSheng[0]++;
			else if(b=='C')
				yiSheng[1]++;
			else
				yiSheng[2]++;
		}
		else//¼×Ê¤
		{
			jia[0]++;
			if(a=='B')
				jiaSheng[0]++;
			else if(a=='C')
				jiaSheng[1]++;
			else
				jiaSheng[2]++;
		}
	}
	cout<<jia[0]<<" "<<jia[1]<<" "<<jia[2]<<endl;
	cout<<jia[2]<<" "<<jia[1]<<" "<<jia[0]<<endl;

	int maxJ=jiaSheng[0];
	int maxY=yiSheng[0];
	int k,m;
	k=m=0;
	for(int i=0;i<3;i++)
	{
		if(jiaSheng[i]>maxJ)
		{
			maxJ=jiaSheng[i];
			k=i;
		}
		if(yiSheng[i]>maxY)
		{
			maxY=yiSheng[i];
			m=i;
		}
	}
	if(k==0)
		cout<<"B";
	else if(k==1)
		cout<<"C";
	else
		cout<<"J";
	cout<<" ";

	if(m==0)
		cout<<"B";
	else if(m==1)
		cout<<"C";
	else
		cout<<"J";
	return 0;
}