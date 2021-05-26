#include<stdio.h>
int main()
{
	int i,low,mid,high,n,key,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	
	scanf("%d",&arr[i]);
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(arr[mid]<key)
		low=mid+1;
		else if (arr[mid]==key)
{
	printf("key found on location %d",mid+1);
	break;
	}	
	else
	high=mid-1;
	mid=(low+high)/2;
}
if(low>high)
printf("not found");
return 0;
}

