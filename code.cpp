#include<stdio.h>
int main()
{
	int t,a,b;
	scanf("%d",&t);
	int county[t];
	
	for(int i=0;i<t;i++)
	{
		scanf("%d %d",&a,&b);
		int count = 0;
		
		
		 if (a%b==0) 
		 {
            county[i] = 0;
         } 
		else
		 {
            county[i] = b - (a % b);
         }
    }	
			
	
	for(int i=0;i<t;i++)
	{
		printf("%d\n",county[i]);
	}
	
	
	return 0;	
}
