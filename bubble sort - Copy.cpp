#include<stdio.h>
int main()
{
	int i,j,n,t,a[10];
	printf("enter the n value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
		for(i=0;i<n;i++){
		
		for(j=0;j<n;j++)
		{
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	}
	printf("The sorted list is:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
