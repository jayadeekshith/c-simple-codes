#include<stdio.h>
int main()
{
	int i,a[50],n,key,pos;
	scanf("%d",&n);
	if(n>50)
	{
printf("not possible");
	}
else{

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&pos);
scanf("%d",&key);

if(pos<=0 || pos >=n+1)
{
	printf("not possible");
}
else
{
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
a[pos-1]=key;
n++;
}
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
}
}
