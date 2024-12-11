#include<stdio.h>

unsigned long long fibonacci(unsigned int term){
	
	if (term == 0) return 0; // The 0th Fibonacci number
    if (term == 1) return 1; // The 1st Fibonacci number
	
	int num0 = 0;            //  num0 is the f(term - 2)           
	int num1 = 1;            //  num1 is the f(term - 1)       
	int numi ;               //  numi is the f(term)
	
	for(int i = 2 ; i<= term ; i++){
		
		numi= num0 + num1;  // update f(term)                // 1        2       3         5
		num0=num1;          // update f(term - 2)            // 1        1       2         3
		num1= numi;         // update f(term - 1)            // 1        2       3         5
		
	}
	
	return numi;
	
}

int main(){
	unsigned int term ;
	
	printf("Enter the order of the Fibonacci term: ");
	scanf("%d",&term);
	
	printf("The term %d in Fibonacci is : %d", term ,fibonacci(term) );
	
}