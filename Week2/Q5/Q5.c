#include <stdio.h>

int sumOfDigits(int num) {         // num = 132
    int sum = 0;
    while (num > 0) {
        sum += num % 10;         //sum = 2        +  3           + 1
        num /= 10;              // num = 13    // num = 1     // num = 0 
    }
    return sum;
}

int main() {
    int N, A, B, total = 0;
    printf("Enter N, A, B: ");
    scanf("%d %d %d", &N, &A, &B);

    for (int i = 1; i <= N; i++) 
	{
        int digitSum = sumOfDigits(i);
        if (digitSum >= A && digitSum <= B) 
		{
            total += i;
        }
    }
    printf("%d\n", total);
}
