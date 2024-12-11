#include <stdio.h>

int X = 5 ;

void main(void){
	
	int z = 5 ;                                     // make the z = z_main             for clarity
	printf("z = %i \n",z);                          // z_main = 5
	
	{
		printf("z = %i \n",z);                     // no new decleration for the z so the z is the z_main = 5
		z = 6 ;                                    // z_main = 6
		
		printf("z = %i \n",z);                     // z_main = 6
		
		int z = 12 ;                              // new decleration for the z to be  z_block  which is differnt from the z_main      [z_block = 12]
		
		printf("z = %i \n",z);                    // z_block = 12
		
		z = 7 ;                                  // z_block = 7 
		
		printf("z = %i \n",z);                  // z_block = 7
	}
	
	printf("z = %i \n",z);                       // out of the block and inside the main so z_main = 6 
	
}