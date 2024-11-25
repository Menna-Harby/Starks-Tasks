#include <stdio.h>
#include <string.h> 

int main(void) {

	/* Q1:  */
	
    char student_Name[100];
    int student_ID;
    float Full_Marks = 130, student_Marks, Mark_percent; 

    // Entering Student data
    printf("Enter your ID: ");
    scanf("%d", &student_ID);
    getchar(); // Clear the newline character

    printf("Enter your Name: ");
    fgets(student_Name, sizeof(student_Name), stdin);
    student_Name[strcspn(student_Name, "\n")] = '\0'; // Remove newline character

    printf("Enter your Total_marks: ");
    scanf("%f", &student_Marks);

    // Calculate and print results
    Mark_percent = (student_Marks / Full_Marks) * 100;
    printf("\n\nStudent information:\n--------------------\n");
    printf("Student Name: %s\n", student_Name);
    printf("Student ID: %d\n", student_ID);
    printf("Student Mark percentage: %.2f%%\n", Mark_percent); 
	
 



	/* Q2:
	
	float num1;
	float num2;
	float t;
	
	printf("enter num 1:");
	scanf("%f",&num1);
	
    printf("enter num 2:");
	scanf("%f",&num2);
	
	printf("\n\nBefore swaping");
	printf("\nnum1= %0.2f \nnum2= %0.2f \n", num1 , num2);
	
	t= num1;
	num1 = num2;
	num2 = t ; 
	
	printf("\nAfter swaping");
	printf("\nnum1= %0.2f \nnum2= %0.2f", num1 , num2);
	
	*/
	
	
	
	
	/* Q3:
	
	char input_char;

    printf("Enter a character: ");
    scanf("%c", &input_char);

    printf("You entered: '%c'\n", input_char);
    printf("ASCII code: %d\n", (int)input_char);

    char prev_char = input_char - 1;
    char next_char = input_char + 1;

    printf("Previous character: '%c'\n", prev_char);
    printf("Next character: '%c'\n", next_char);
	
	*/
	
	
	
	
	/* Q4:
	
	// decleration
    float num1, num2; 
    float sum, difference, product, quotient; 

    // scan num1 & num2
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // calculations
    sum = num1 + num2;
    difference = num1 - num2;      
    product = num1 * num2;         

    // Check for division by zero
    if (num2 != 0) {
        quotient = num1 / num2;      
        printf("Division: %.2f\n", quotient);
    } else {
        printf("Division: Undefined (cannot divide by zero)\n");
    }

    // output
    printf("Addition: %.2f\n", sum);
    printf("Subtraction: %.2f\n", difference);
    printf("Multiplication: %.2f\n", product);
	
	*/
	
	
    return 0; 
}