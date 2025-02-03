#include<stdio.h>

int somaMatrizes()
{
    int matrizA [2] [2], matrizB [2] [2], matrizSomada[2][2];
    
    //Inicializa matrizes
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            matrizA[i][j] = 0;
            matrizB[i][j] = 0;
            matrizSomada[i][j] = 0;
        }
    }
    
    printf("PROGRAMA QUE SOMA MATRIZES\n\n");
    
    printf("Insira os valores da matriz A:\n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("Posicao [%i] [%i] <- ", i, j);
            scanf("%i", &matrizA[i][j]);
            fflush (stdin);
        }
    }
    
    printf("\n\nInsira os valores da matriz B:\n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("Posicao [%i] [%i] <- ", i, j);
            scanf("%i", &matrizB[i][j]);
            fflush (stdin);
        }
    }
    
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            matrizSomada[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    
    printf("\nMatriz A: \n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("[%i] ", matrizA[i][j]);
        }
        printf ("\n");
    }

    printf("\nMatriz B: \n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("[%i] ", matrizB[i][j]);
        }
        printf ("\n");
    }
    
    printf("\nA soma das matrizes eh: \n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("[%i] ", matrizSomada[i][j]);
        }
        printf ("\n");
    }
    
    return 0;
    
}

int subtraiMatrizes()
{
    int matrizA [2] [2], matrizB [2] [2], matrizSubtraida[2][2];
    
    //Inicializa matrizes
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            matrizA[i][j] = 0;
            matrizB[i][j] = 0;
            matrizSubtraida[i][j] = 0;
        }
    }
    
    printf("PROGRAMA QUE SUBTRAI MATRIZES\n\n");
    
    printf("Insira os valores da matriz A:\n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("Posicao [%i] [%i] <- ", i, j);
            scanf("%i", &matrizA[i][j]);
            fflush (stdin);
        }
    }
    
    printf("\n\nInsira os valores da matriz B:\n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("Posicao [%i] [%i] <- ", i, j);
            scanf("%i", &matrizB[i][j]);
            fflush (stdin);
        }
    }
    
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            matrizSubtraida[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
    
    printf("\nMatriz A: \n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("[%i] ", matrizA[i][j]);
        }
        printf ("\n");
    }

    printf("\nMatriz B: \n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("[%i] ", matrizB[i][j]);
        }
        printf ("\n");
    }
    
    printf("\nA subtracao das matrizes eh: \n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("[%i] ", matrizSubtraida[i][j]);
        }
        printf ("\n");
    }
    
    return 0;
}

int multiplicaMatrizes()
{
    int matrizA [2] [3], matrizB [3] [2], matrizR[2][2];
    
    //Inicializa matrizes
    for (int i = 0; i <= 1; i++) for (int j = 0; j <= 2; j++)
    	matrizA[i][j] = 0;
    
    for (int i = 0; i <= 2; i++) for (int j = 0; j <= 1; j++)
    	matrizB[i][j] = 0;
    	
    for (int i = 0; i <= 1; i++) for (int j = 0; j <= 1; j++)
    	matrizR[i][j] = 0;
    
    printf("PROGRAMA QUE MULTIPLICA MATRIZES\n\n");
    
    printf("Insira os valores da matriz A (2 x 3):\n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Posicao [%i] [%i] <- ", i, j);
            scanf("%i", &matrizA[i][j]);
            fflush (stdin);
        }
    }
    
    printf("\nInsira os valores da matriz B (3 x 2):\n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("Posicao [%i] [%i] <- ", i, j);
            scanf("%i", &matrizB[i][j]);
            fflush (stdin);
        }
    }
    printf("\n");
    
    printf("+-+-+ PROCESSAMENTOS INSANOS +-+-+\n\n");
    for(int i = 0; i <= 1; i++) for (int j = 0; j <= 1; j++)
    {
    	for(int contador = 0; contador <= 2; contador++)
    	{
    		matrizR [i][j] = matrizR [i][j] + (matrizA [i] [contador] * matrizB [contador] [j]);
    		printf("%i x %i\n", matrizA [i] [contador], matrizB [contador][j]);
    	}
    	printf("Matriz R [%i] [%i] = %i\n\n", i, j, matrizR [i] [j]);
    }
    
    printf("+-+-+ RESULTADOS +-+-+-+\n\n");
    printf("Matriz A: \n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("[%i] ", matrizA[i][j]);
        }
        printf ("\n");
    }

    printf("\nMatriz B: \n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("[%i] ", matrizB[i][j]);
        }
        printf ("\n");
    }
    
    printf("\nA multiplicacao das matrizes eh: \n");
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("[%i] ", matrizR[i][j]);
        }
        printf ("\n");
    }
    
    return 0;
}
