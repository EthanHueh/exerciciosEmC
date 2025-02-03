#include "../include/exercicios_extras.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

int Acha_maior_e_menor_com_ponteiros()
{
	printf("int *ptr;\n\n");
	
	printf("EXPLICACAO: Declara um ponteiro para lidar com inteiros\n\n");
	
	printf("----- // -----\n\n");
	
	printf("ptr = vetor;\n");
	printf("ptr = &vetor[0];\n\n");
	
	printf("EXPLICAÇÃO: Os dois recebem o MESMO ENDERECO DE MEMORIA do vetor\n\n");
	
	printf("----- // -----\n\n");
	
	printf("*ponteiro\n");
	printf("ponteiro [0]\n\n");
	
	printf("EXPLICAÇÃO: Os dois sao a mesma coisa. Representam o CONTEUDO do primeiro\n");
	printf("endereco de memoria.\n\n");
	
	printf("----- // -----\n\n");
	
	printf("ponteiro\n\n");
	
	printf("EXPLICAÇÃO: Representa o ENDERECO DE MEMORIA\n\n");
	printf("(-238775200 ou algo TENEBROSO assim, com hexadecimal e todas as desgraças\n\n");
	
	printf("----- // -----\n\n");
	
	printf("ponteiro = ponteiro + 1;\n");
	printf("ponteiro++;\n\n");
	
	printf("EXPLICACAO: Aqui estamos MOVENDO a posicao de ENDERECO DE MEMORIA que o ponteiro aponta\n\n");
	
	printf("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
    
    int quantidadeNumeros = 0;
    int maiorNumero = 0, menorNumero = 0;
    
    printf("PROGRAMA QUE ACHA O MAIOR E O MENOR DOS NUMEROS INSERIDOS (USA PONTEIROS) \n\n");
    printf("Insira a quantidade de numeros a serem analisados (limite de 100): ");
    do
    {
        scanf("%i", &quantidadeNumeros);
        fflush(stdin);
    }
    while (quantidadeNumeros > 100);
    
    //Inicializando um vetor:
    int n [100];
    for (int i = 0; i <= 99; i++) 
    {
       n[i] = 0;
    }
    
    //PONTEIROS
    int *ponteiro;
    ponteiro = n;
    
    //Tramites
    for(int i = 0; i < quantidadeNumeros; i++)
    {
        printf("Insira o %io numero: ", (i + 1));
        scanf("%i", &n[i]);
        fflush(stdin);
        
        int primeiraIteracao = (i == 0);
        if (primeiraIteracao)
        {
            maiorNumero = n[i];
            menorNumero = n[i];
        }
        
        if(n[i] < menorNumero) menorNumero = n[i];
        if(n[i] > maiorNumero) maiorNumero = n[i];
    }
    
    printf("\nO maior valor foi: %i\n", maiorNumero);
    printf("O menor valor foi: %i\n\n", menorNumero);
    
    printf("Os valores inseridos foram: ");
    for(int i = 0; i < quantidadeNumeros; i++)
    {
            printf("%i; ", ponteiro[i]);     
    }
    
    getchar();
    
    return 0;
}
    
int padraoASCII()
{
    for (int i = 0; i <= 255; i++)
    {
    	printf("\n%i: %c", i, i);
	}

    return 0;
}

int testeBibliotecaString ()
{
	
    char palavra1[30], palavra2[30], palavra3 [30];
    
    //Inicializa os vetores
    for (int i = 0; i <= 29; i++) 
    {
    	palavra1[i] = '\0';
    	palavra2[i] = '\0';
	}
	
	printf("TESTE DE BIBLIOTECA DE STRINGS <string.h>\n\n");
	
	printf("!!!AVISO!!!\n\n");
	
    printf("Tentamos fazer essa tarefa usando frases (que podemos obter usando um scanf diferenciado)\n");
    printf("e usando as funcoes strupr e strlwr da biblioteca <string.h>, POREM ao compilarmos no onlineGDB\n");
	printf("e numa versao mais antiga do Dev C++, simplesmente NAO FUNCIONA.\n");
	printf("Vai ter que ficar incompleto assim mesmo >:(\n\n");
    
    //para inserir frases numa string = scanf("%[^\n]", variavel);
    
    printf("Insira a primeira palavra: ");
    scanf("%s", palavra1);
    fflush(stdin);
    
    printf("Insira a segunda palavra: ");
    scanf("%s", palavra2);
    fflush(stdin);
    
    if (strcmp (palavra1, palavra2))
        printf ("\nAs strings sao diferentes!\n\n");
    else
        printf ("\nAs strings sao iguais!!!\n\n");
    
    strcpy(palavra3, palavra1);
    printf("Primeira palavra so que copiada: %s\n\n", palavra3);
    
    printf("Tamanho da primeira palavra: %li\n", strlen(palavra1));
    printf("Tamanho da segunda palavra: %li\n\n", strlen(palavra2));
    
    printf("Palavras maiusculadas (funcao STRUPR, nao funciona em todos os compiladores):\n");
    printf("--------\n");
    printf("--------\n\n");
    
    printf("Palavras minusculadas (funcao STRLWR, nao funciona em todos os compiladores)\n");
    printf("--------\n");
    printf("--------\n\n");
    
    printf("Palavra concatenada: ");
    printf("%s", strcat(palavra1, palavra2));
    printf("\n\n");
    
    return 0;
}

int alocacaoDinamica () {
    
    //EXERCICIO
    //Leia 10 valores e coloque no vetor, usando os tramites de alocacao dinamica de memoria (malloc)
    
    printf("PROGRAMA QUE LE 10 VALORES E ALOCA DINAMICAMENTE A MEMORIA\n\n");
    
    //Crio um vetor de 0 elementos (sla, testei e foi)
    //Logo depois uso um ponteiro pra apontar pro endereco dele
    int vetor[0];
    int *ponteiro = vetor;
    
    //Uso o "malloc" pra alocar 10 espaços do tipo inteiro
    ponteiro = (int*) malloc(10*sizeof(int));
    
    //A partir daqui, posso usar o vetor como se ele ja tivesse 10 espacos desde o comeco
    printf("Insira 10 valores:\n");
    for (int i = 0; i <= 9; i++){
        scanf("%i", &vetor[i]);
        fflush(stdin);
    }
    
    printf("\nOs valores inseridos foram:\n");
    for (int i = 0; i <= 9; i++){
        printf("%i\n", vetor[i]);
    }
    
    //Aqui eu libero a memoria, num preciso mais >:(
    free(ponteiro);
    
    return 0;
}
