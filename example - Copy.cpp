#include<stdio.h>
#include<conio.h>
int main()
{
	
//	int i=5;
//	int var =sizeof(i++);
	int a=1;
	int b=1;
	int c =++a || b++;
	int d =b -- && --a;
	printf("%d %d %d %d",a,b,c,d);
//	printf("%d%d",i,var);
//	printf("\n hello");
	return 0;
}
