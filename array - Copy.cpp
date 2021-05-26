#include<stdio.h>
int main()
{
int result=0;
	int arr[]={1,2,3,2,3,1,2,4,5,6,5,4,6,7};
for(int i=0;i<14;i++)
{


result=result^arr[i];

}
printf("%d",result);
}
