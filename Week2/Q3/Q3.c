#include <stdio.h>

int main(){
	int n_line;
	int num = 1;
	
	printf("Enter the num_lines :");
	scanf("%d",&n_line);
	
	for(int i=0 ; i < n_line ;i++)
	{
		if(num % 4 ==0)
		{ 
			num++;                 // num = 1                // num = 5
		}
		
		printf("%d ",num++);      // 1   num = 2            // 5   num = 6
		printf("%d ",num++);      // 2   num = 3            // 6   num = 7 
		printf("%d ",num++);      // 3   num = 4            // 7   num = 8 
		printf("PUM\n");          // PUM    num = 4         // PUM  num = 8 
		
		
	}
}