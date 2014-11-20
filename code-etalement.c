#include <stdio.h>
#include <stdlib.h>
#include "code-etalement.h"



int main(){
	printf("avant\n");
	creerHadamard(2);
  printf("apres\n");
	return 0;
}


int creerHadamard(int n){

	// Variable
	int LONGUEUR = n;
	int hada[LONGUEUR][LONGUEUR];
	int i, j, k = 2;
		
	// Initialisation de la matrice
	hada[0][0] = 1;
	
	
	// Creation
	while (k <= LONGUEUR){
	
		for (i = 0; i < k; i++){		
			for (j = 0; j < k; j++){		
				
				if (i < k/2 && j < k/2){}
				
				else{
				
					if(i >= k/2 && j >= k/2){
						hada[i][j] = -(hada[i-k/2][j-k/2]);
					}
					else{
					
						if (i > j)						
							hada[i][j] = hada[i-k/2][j];						
						else						
							hada[i][j] = hada[i][j-k/2];					
					}
				}
			}
		}
		
		k *= 2;
	}
    
    
	// Affichage
	for (i = 0; i < LONGUEUR; i++){   
		for (j = 0; j < LONGUEUR; j++)       
			printf("%2d ", hada[i][j]);
               
		printf("\n");
	}
	return 0;
}
