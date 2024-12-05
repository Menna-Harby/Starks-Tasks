#include<stdio.h>

int main(){
	int origin_ID , origin_PASSWORD ;
	int ID,PASSWORD;
	int status;
	
	printf("Enter your ID: ");
	scanf("%d",&origin_ID);
	
	printf("Enter your Password : ");
	scanf("%d",&origin_PASSWORD);
	
	printf("--------------------------\n");
	
	
	printf("Welome to the program\n");
	
	printf("Enter your ID: ");
	scanf("%d",&ID);
	
	if(ID == origin_ID)
	{
		for(int i = 0 ; i < 3 ; i++)
		{
			printf("Enter your PASSWORD: ");
		    scanf("%d",&PASSWORD);
			
			if(PASSWORD == origin_PASSWORD)
		   {
			printf("---- Welcome ----");
			status=1;
			break;
		   }
		   
		   else
		   {
			   printf("\nYour PASSWORD is incorrect\n");
		   }
		}
		   
		   if(status != 1)
				printf("NO MORE TIMES");
	}
	
	else
	{
		printf("You are not registered\n");
	}
		
}