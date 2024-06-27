#include<stdio.h>
int main(){

	int n,untreated_crimes=0,officers=0,i;
	scanf("%d",&n);
	
	for(i=0;i<n;++i)
	{
		int event;
		scanf("%d",&event);
		
		if(event == -1)
		{
			if(officers > 0)
			{
				officers--;
			}
			else{
				untreated_crimes++;
			}
		}
		
		else{
			officers += event;
		}
	}
	
	printf("%d",untreated_crimes);
	
	return 0;
}
