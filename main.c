#include <stdio.h>
#include <stdlib.h>
#include "exercicios_iniciais.h"
#include "exercicios_extras.h"
#include "exercicios_vetor.h"
#include "exercicios_string.h"
#include "exercicios_recursiva.h"
#include "exercicios_matriz.h"

int Sub_Menu_Vetores();
int Sub_Menu_Strings();
int Sub_Menu_Matrizes();
int Sub_Menu_FuncoesRecursivas();

int main()
{
  
  int continua = 1;
  
  do
  {
    printf("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
    
    printf("MENU\n\n");
    
    printf("1 - Media Fatec\n");
    printf("2 - Ajuste de Preco (com IF)\n");
    printf("3 - Media Fatec (com SWITCH)\n");
    printf("4 - Fatorial (com Do while)\n");
    printf("5 - Fibonacci (com Do while)\n");
    printf("6 - Progressao Aritmetica (com Do while)\n");
    printf("7 - Fatorial (com while)\n");
    printf("8 - Fibonacci (com while)\n"); 
    printf("9 - Progressao Aritmetica (com while)\n"); 
    printf("10 - Fatorial (com for)\n");
    printf("11 - Fibonacci (com for)\n");
    printf("12 - Progressao Aritmetica (com for)\n\n");
    
    printf("13 - Sub menu de manipulação de dados (vetores)\n");
    printf("14 - Sub menu de manipulação de strings\n");
    printf("15 - Sub menu de manipulação de matrizes\n");
    printf("16 - Sub menu de mexeção de funções recursivas\n\n");
    
    printf("EXTRAS:\n");
    printf("101 - Acha_maior_e_menor_com_ponteiros\n");
    printf("102 - Padrao ASCII\n");
    printf("103 - Teste com a biblioteca de STRINGS\n");
    printf("104 - Alocacao dinamica (malloc AAAAAAAA)\n\n");
    
    printf("900 - Sair\n\n");
    
	printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    
    int opcao = 0;
    
    printf("\nInsira a opcao desejada: ");
    scanf("%i",&opcao);
    fflush(stdin);
    
    printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
    
    system("\npause");
    system("cls");
    
    switch (opcao)
    {
        default: printf("Opcao Invalida"); break;
        
        case 1: mediaFatec(); break;
        case 2: ajusteProdutoComIf(); break;
        case 3: ajusteProdutoComSwitch(); break;
        case 4: fatorial(); break;
        case 5: fibonnaci(); break;
        case 6: progressaoAritmetica(); break;
        case 7: fatorial_com_while(); break;
        case 8: fibonacci_com_while(); break;
        case 9: PA_com_while(); break;
        case 10: fatorial_com_for(); break;
        case 11: fibonacci_com_for(); break;
        case 12: PA_com_for(); break;
        
        case 13: Sub_Menu_Vetores(); break;
        case 14: Sub_Menu_Strings(); break;
        case 15: Sub_Menu_Matrizes(); break;
        case 16: Sub_Menu_FuncoesRecursivas(); break;
        
        case 101: Acha_maior_e_menor_com_ponteiros(); break;
        case 102: padraoASCII(); break;
        case 103: testeBibliotecaString(); break;
        case 104: alocacaoDinamica(); break;
		        
        case 900:   printf("saiu :)");
                    continua = 0;
                    break;     
    }
    
    printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
    system("pause");
    system("cls");
    
  }
  while (continua);
  
  return 0;
}

int Sub_Menu_Vetores()
{
    int continua = 1;
    
    do
    {
        printf("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
        
        printf("SUB-MENU (MANIPULACAO DE VETORES)\n\n");
        
        printf("1 - Encontra Maior e Menor valor de uma sequencia e exibe\n");
        printf("2 - Encontra Maior e Menor valor de uma sequencia e exibe na ordem inversa\n");
        printf("3 - Eleva numeros inseridos a um expoente\n");
        printf("4 - Sair\n\n");
    
        printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
        
        int opcao = 0;
        
        printf("\nInsira a opcao desejada: ");
        scanf("%i",&opcao);
        fflush(stdin);
        
        printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
        system("\npause");
        system("cls");
        
        switch (opcao)
        {
            default: printf("Opcao Invalida"); break;
            
            case 1: Acha_maior_e_menor(); break;
            case 2: Acha_maior_e_menor_Inverso(); break;
            case 3: Eleva_Numeros(); break;
            
            case 4: printf("saiu :)"); 
					continua = 0;
					break;
        }
        
        printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
        system("pause");
        system("cls");
  }
  while (continua);
  
  return 0;
}

int Sub_Menu_Strings()
{
    int continua = 1;
    
    do
    {
        printf("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
        
        printf("SUB-MENU (MANIPULACAO DE STRINGS)\n\n");
        printf("x - Leh uma string e diz quandos caracteres ela tem.\n");
        printf("y - Leh uma string e um caractere. Diz quantas vezes o caractere se repete nela.\n");
        printf("z - Leh uma palavra e diz se eh um palíndromo.\n\n");
        
        printf("a - Leh uma string e passa tudo pra maiúsculo\n");
        printf("b - Leh uma string e copiar para outra string\n");
        printf("c - Leh duas string e concatena em outra\n\n");
        
        printf("d - Leh uma frase e diz se eh um palindromo\n\n");
        
        printf("S - Sair\n\n");
    
        printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
        
        char opcao = '0';
        
        printf("\nInsira a opcao desejada: ");
        scanf("%c",&opcao);
        fflush(stdin);
        
        printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
        system("\npause");
        system("cls");
        
        switch (opcao)
        {
            default: printf("Opcao Invalida"); break;
            
            case 'x': tamanhoString(); break;
            case 'y': quantidadeCharEmString(); break;
            case 'z': checaSePalavraPalindromo(); break;
            
            case 'a': maiuscularString(); break;
            case 'b': copiarString(); break;
            case 'c': concatenaStrings(); break;
            
            case 'd': checaSeFrasePalindromo(); break;
            
            case 's': 	printf("saiu :)");
						continua = 0;
			break;
			
            case 'S': 	printf("saiu :)");
						continua = 0;
			break;
        }
        
        printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
        system("pause");
        system("cls");
  }
  while (continua);
  
  return 0;
}

int Sub_Menu_Matrizes()
{
   int continua = 1;
    
    do
    {
        printf("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
        
        printf("SUB-MENU (MANIPULACAO DE MATRIZES)\n\n");
        
        printf("1 - Soma matrizes\n");
        printf("2 - Subtrai matrizes\n");
        printf("3 - Multiplica matrizes\n");
        printf("4 - Sair\n\n");
    
        printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
        
        int opcao = 0;
        
        printf("\nInsira a opcao desejada: ");
        scanf("%i",&opcao);
        fflush(stdin);
        
        printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
        system("\npause");
        system("cls");
        
        switch (opcao)
        {
            default: printf("Opcao Invalida"); break;
            
            case 1: somaMatrizes(); break;
            case 2: subtraiMatrizes(); break;
            case 3: multiplicaMatrizes(); break;
            
            case 4:	printf("saiu :)");
					continua = 0;
			break;
        }
        
        printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
        system("pause");
        system("cls");
  }
  while (continua);
  
  return 0;
}

int Sub_Menu_FuncoesRecursivas()
{
    int continua = 1;
    
    do
    {
        printf("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
        
        printf("SUB-MENU (FUNCOES RECURSIVAS)\n\n");
        printf("1 - Fatorial\n");
        printf("2 - Fibonacci\n");
        printf("3 - Sair\n\n");
    
        printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
        
        int opcao = 0;
        
        printf("\nInsira a opcao desejada: ");
        scanf("%i",&opcao);
        fflush(stdin);
        
        printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
        system("\npause");
        system("cls");
        
        //declarando as variaveis aqui porque é ILEGAL declarar dentro do case
        int numero = 0;                
        int quantidadeTermos = 0;
        
        switch (opcao)
        {
            default: printf("Opcao Invalida"); break;
            
            case 1:
            	printf("\n\nFATORIAL RECURSIVISTA");
                
                printf("\n\nQual seria o numero que vossa mercer desejaria, em toda a sua elegancia, conhecer seu fatorialamento?\n");
                scanf("%i", &numero);
                fflush(stdin);
                
                printf("\nResultado: ");
                printf("%i", fatorialComRecursiva(numero));
            break;
            
            case 2:
                printf("\n\nFIBONACCI RECURSIVISTA");
                
                printf("\n\nQuantos termos voce quer? ");
                scanf("%i", &quantidadeTermos);
                fflush(stdin);
                
                printf("\nSequencia de Fibonnaci ate o %i termo:\n", quantidadeTermos);
                fibonacciComRecursiva(1,0,quantidadeTermos);
            
            break;
 
            case 3:	printf("saiu :)");
            		continua = 0;
            break;
        }
        
        printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
        system("pause");
        system("cls");
  }
  while (continua);
  
  return 0; 
}