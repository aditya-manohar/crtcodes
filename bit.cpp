#include<stdio.h>

int main()
{
	int x=0,l,r;
	printf("Enter the lower limit : ");
	scanf("%d",&l);
	printf("Enter the upper limit : ");
	scanf("%d",&r);
	for(int i=l;i<=r;i++)
	{
		x = x^i;
	}
	printf("%d",x);
	return 0;
}
