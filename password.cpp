#include<stdio.h>
#include<string.h>
int main()
{
	char username[50],password[50];
	int count=3;
	printf("\nEnter the username : ");
	scanf("%s",&username);
	
	while(count>0)
	{
		printf("\nEnter the password : ");
		scanf("%s",&password);
		if(strcmp(password,"man")==0)
		{
			count = 0;
			printf("Accessed");
		}
		else{
			if(count==0)
			{
				printf("Last chance");
				count--;
			}
			else{
				if(count == 2)
				{
					printf("Wrong password. 1 chance left");
					count--;
				}
				else{
					printf("Wrong password. %d chances left",count-1);
				count--;
				}			
			}
		}
	}
 	return 0;	
}
