#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	int score[101]={0};
	int mark;
	for(int i=0;i<N;i++)
	{
		scanf("%d",&mark);
		score[mark]++;
	}
	int K;
	scanf("%d",&K);
	for(int i=0;i<K-1;i++)
	{
		scanf("%d",&mark);
		printf("%d",score[mark]);
		printf(" ");
	}
	scanf("%d",&mark);
	printf("%d",score[mark]);

	return 0;
}