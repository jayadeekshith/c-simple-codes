#include<stdio.h>
int main()
{
	int n,q,res=0,rem;
	scanf("%d",&n);
	q=n;
//	nt v=124;
//	printf("%d",v%10);
	while(q!=0)
	{
		rem=q%10;
		res=res*10+rem;
		q=q/10;
		
}
if(res==n)

{
	printf("its yes");
	
}
else
{
	printf("not palin");
}
}
