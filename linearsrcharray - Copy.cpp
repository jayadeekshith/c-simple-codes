#include<stdio.h>
int main()
{
	int num,i,keynum,found=0;
	printf("enter the number of elements");
	scanf("%d",&num);
	int arr[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}

scanf("%d",&keynum);
for(i=0;i<num;i++)
{

if (keynum==arr[i])

{
found=1;
break;
}
}
if(found==1)
printf("element found");
else
printf("not found");
}
