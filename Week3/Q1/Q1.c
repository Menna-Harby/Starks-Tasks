#include<stdio.h>

int reverse (int num){
	int reversed = 0;
	while(num != 0){
		reversed = reversed * 10 + (num % 10);
		num/=10;
	}
	
	return reversed ;
}

int main(){
	int num ; 
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	printf("reversed num: %d ", reverse(num));
	
}