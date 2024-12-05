#include<stdio.h>

int main(){
	int Limak_Weight , Bob_Weight ;
	int years= 0 ;
	
	printf("Enter weights of Limak and Bob: ");
	scanf("%d %d", &Limak_Weight, &Bob_Weight);      // 4  8 
	
	while(Limak_Weight <= Bob_Weight){     //  1      1     0
		Limak_Weight*= 3;                 //  12      36     
		Bob_Weight*=2;                   //   16      32
		years++;                        //    1        2
	}
	
	printf("%d\n", years);
	
	
	
}