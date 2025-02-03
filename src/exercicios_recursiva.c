#include "../include/exercicios_recursiva.h"
#include <stdio.h>

int fatorialComRecursiva(int n)
{
    if (n == 1) {
    	return 1;
	}	
   	else {
   		return n * fatorialComRecursiva(n-1);
   	}
}

int fibonacciComRecursiva(int termo1, int termo2, int qtdTermos)
{
	if (qtdTermos == 0) {
		return 0;
	}
	
	int proximoTermo = termo1 + termo2;
	
	printf(" %i ", proximoTermo);
	
	termo1 = termo2;
	termo2 = proximoTermo;
    
    fibonacciComRecursiva(termo1, termo2, qtdTermos - 1);
    
}