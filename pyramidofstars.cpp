#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
for(int i=1;i<=2*n-1;i++)
{
	for(int j=1;j<=n;j++)
	{
		if(i>=n-(j-1) &&i<=n+(j-1) )
{
printf(" ");
}
else if(i<=j)
{
	printf("*");
}
else 
{
	printf("*");
	

	
}
	}
	printf("\n");}
}


