#include<stdio.h>
int main()
{
	int N,n=2,count=0;
	while(n--)
{
	
	scanf("%d",&N);
	for(int i=0;i<=N;i++)
{
	if(N%i==0)
	{
		count=count++;

		printf("%d",count);
		break;
	}
}
}
}
