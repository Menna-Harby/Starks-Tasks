#include<stdio.h>

int main(){
	
	int num1 , num2;
	char status = 'Y' ;
	
	while(1)
	{
		
	printf("Enter two numbers: ");
	scanf("%d %d", &num1 , &num2);
	
	printf("The summation of %d and %d is: %d\n\n", num1 , num2,(num1+num2));
	
	printf("Press 'N' to exist\n");
	scanf(" %c", &status);
	
	if (status == 'n' || status == 'N' )
	{
		printf("You Exist the Program");
		break;
	}
	
	
	}
	
}