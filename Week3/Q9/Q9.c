#include "Q9.h"
#include<stdio.h>
int main() {
	
	int num1;
	int num2;
	int off =1;
	while(off){
		
		printf("enter num1: ");
	    scanf("%d",&num1);
	    printf("enter num2: ");
	    scanf("%d",&num2);

        calculate_average(num1, num2);
		
		printf("enter 0 to exist ");
		scanf("%d",&off);
	}


	
	/*
	How to run the program
	-----------------------
	gcc -c Q9.c -o Q9.o
	gcc -c lab1.c -o lab1.o
	gcc Q9.o lab1.o -o lab1_program
	
	lab1_program.exe
	
	*/
	

    return 0;
}