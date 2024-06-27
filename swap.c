#include<stdio.h>

int main()
{
	int n ;
	scanf("%d",&n);
	
	while(n!=0)
	{
		int rem  = n%2;
		n = n/2;
		printf("%d",rem);
	}
	return 0;
}
