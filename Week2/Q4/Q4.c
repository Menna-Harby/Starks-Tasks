#include<stdio.h>

int main(){
	
	int V , A , B , C ; 
	
	printf("Enter V, A, B, C: ");
    scanf("%d %d %d %d", &V, &A, &B, &C);          // 12  2 3 4 
	
	while (1) 
	{
        V -= A;                                  // v = 12 - 2 = 10     // v = 3-2 = 1
        if (V < 0)
		{
            printf("F\n");
            break;
        }
		
        V -= B;                               // v = 10 - 3 = 7       // v = 1-3 = -2  
        if (V < 0) 
		{
            printf("M\n");                                           // M
            break;
        }
		
        V -= C;                              // v = 7 - 4 = 3
        if (V < 0) 
		{
            printf("T\n");
            break;
        }
    }
	
}