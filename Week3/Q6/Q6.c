#include <stdio.h>

unsigned int foo (unsigned int n, unsigned int r)
{
if (n > 0) 
	return((n % r) + foo(n/r, r));
else 
	return 0;
}

int main(){
	
	unsigned int n ;
	unsigned int r ; 
	
	printf("Enter the n : ");
	scanf("%d",&n);
	
    printf("Enter the r : ");
	scanf("%d",&r);
	
	printf("her is the output of the function foo: %d ",foo (n,r) );
}