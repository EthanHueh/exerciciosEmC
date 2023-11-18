#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <malloc.h>

int mediaFatec();

int ajusteProdutoComIf();
int ajusteProdutoComSwitch();

int fatorial();
int fibonnaci();
int progressaoAritmetica();

int fatorial_com_while();
int fibonacci_com_while();
int PA_com_while();

int fatorial_com_for();
int fibonacci_com_for();
int PA_com_for();

int Sub_Menu_Vetores();
	int Acha_maior_e_menor();
	int Acha_maior_e_menor_Inverso();
	int Eleva_Numeros();

int Sub_Menu_Strings();
    int tamanhoString();
    int quantidadeCharEmString();
    int checaSePalavraPalindromo();
    
    int maiuscularString();
    int copiarString();
    int concatenaStrings();

    int checaSeFrasePalindromo();
    
int Sub_Menu_Matrizes();
    int somaMatrizes();
    int subtraiMatrizes();
    int multiplicaMatrizes();
    
int Sub_Menu_FuncoesRecursivas();
    int fatorialComRecursiva(int);
    int fibonacciComRecursiva(int, int, int);
    
//Extras
int Acha_maior_e_menor_com_ponteiros();
int padraoASCII();
int testeBibliotecaString();
int alocacaoDinamica();

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





//Sub menus

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





//Extras

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
}





//programas...

int mediaFatec()
{
    int prova1 = 0, prova2 = 0;
    int trabalho1 = 0, trabalho2 = 0;
    
    //Apresentacao
    printf("PROGRAMA QUE CALCULA A MEDIA FINAL DO ALUNO\n\n");
    
    //Primeiro Bimestre
    printf("Entre com a nota da P1: ");
    scanf("%i", &prova1);
    fflush(stdin);
    
    printf("Entre com a nota do primeiro trabalho: ");
    scanf("%i", &trabalho1);
    fflush(stdin);
    
    //Segundo Bimestre
    printf("Entre com a nota da P2: ");
    scanf("%i", &prova2);
    fflush(stdin);
    
    printf("Entre com a nota do segundo trabalho: ");
    scanf("%i", &trabalho2);
    fflush(stdin);
    
    printf("\n");
    
    //Calculos insanos
    float media1 = (prova1 * 0.7) + (trabalho1 * 0.3);
    float media2 = (prova2 * 0.6) + (trabalho2 * 0.4);
    float mediaFinal = (media1 + media2)/2;
    
    //Valores logicos
    int passou = (mediaFinal >= 6);
    int aindaHaEsperanca = (mediaFinal > 2);
    
    if (passou)
    {
        printf("Aluno aprovado com media final %f", mediaFinal);
        return 0;
    }

    if (aindaHaEsperanca)
    {
        int recuperacao = 0;
        
        printf("Aluno ficou de recuperação, insira a nota da recuperação: ");
        scanf("%i", &recuperacao);
        fflush(stdin);
        
        mediaFinal = (mediaFinal + recuperacao)/2 ;
        passou = (mediaFinal >= 6);
    
        if (passou) printf("Aluno quase reprovou, mas passou com media final %f", mediaFinal);
        if (!passou) printf("Aluno infelizmente reprovou, com media final %f", mediaFinal);
    }
    else
    {
        printf("Esse ai se lascou, com media final %f", mediaFinal);
    }
    
    getchar();
    
    return 0;
}

int ajusteProdutoComIf()
{
    float precoEntrada = 0;
    int opcao = 0;
    
    printf("PROGRAMA QUE PEDE VALOR DE UM PRODUTO E APLICA DESCONTO\n\n");
    
    printf("Insira o valor do produto(valor que seja coerente): ");
    scanf("%f", &precoEntrada);
    fflush(stdin);
    
    printf("\n \nInsira a opcao de desconto desejada");
    printf("\n 1) 5 por cento \n 2) 8 por cento \n 3) 20 por cento \n 4) 35 por cento \n");
    
    printf("Insira uma das opções: ");
    scanf("%i", &opcao);
    fflush(stdin);
    
    int opcaoInvalida = (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4);
    if(opcaoInvalida)
    {
        printf("VOCE TINHA UM TRABALHO...");
        return 0;
    }
    
    float precoAjustado = 0;
    
    if(opcao == 1) precoAjustado = precoEntrada * 0.95;
    if(opcao == 2) precoAjustado = precoEntrada * 0.92;
    if(opcao == 3) precoAjustado = precoEntrada * 0.80;
    if(opcao == 4) precoAjustado = precoEntrada * 0.65;
    
    printf("\n\n O preco inserido com o desconto eh %f", precoAjustado);
    
    getchar();
    
    return 0;
}

int ajusteProdutoComSwitch()
{
    float precoEntrada = 0, precoAjustado = 0;
    int opcao = 0;
    
    printf("PROGRAMA QUE PEDE VALOR DE UM PRODUTO E APLICA DESCONTO\n\n");
    
    printf("Insira o valor do produto(valor que seja coerente): ");
    scanf("%f", &precoEntrada);
    fflush(stdin);
    
    printf("\n \n Insira a opcao de desconto desejada");
    printf("\n 1) 5 por cento \n 2) 8 por cento \n 3) 20 por cento \n 4) 35 por cento \n");
    
    printf("Insira uma das opções: ");
    scanf("%i", &opcao);
    fflush(stdin);
    
    switch(opcao)
    {
        default: printf("VOCE TINHA UM TRABALHO..."); return 0; break;
        
        case 1: precoAjustado = precoEntrada * 0.95; break;
        case 2: precoAjustado = precoEntrada * 0.92; break;
        case 3: precoAjustado = precoEntrada * 0.80; break;
        case 4: precoAjustado = precoEntrada * 0.65; break;
    }  
    
    printf("\n\n O preco inserido com o desconto eh %f", precoAjustado);
    
    getchar();
    
    return 0;
}

int fatorial()
{
    int numero = 0; 
    
    printf("PROGRAMA QUE CALCULA O FATORIAL\n\n");
    
    printf("Insira numero para calculo de fatorial: ");
    scanf("%i", &numero);
    fflush(stdin);
    
    int fatorial = 1;
    do
    {
        fatorial = fatorial * numero;
        numero = numero - 1;
    }
    while(numero > 1);
    
    printf("O fatorial do numero inserido  eh %i", fatorial);
    
    getchar();
    
    return 0;
}

int fibonnaci()
{
    int termo1 = 1, termo2 = 0, proximoTermo = 0;
    int quantidadeTermos = 0;
    
    printf("PROGRAMA SEQUENCIA FIBONACCI\n\n");
    
    printf("Insira ate qual termo da sequencia deseja obter: ");
    scanf("%i",&quantidadeTermos);
    fflush(stdin);
    
    int contador = 0;
    
    while (contador != quantidadeTermos)
    {
        proximoTermo = termo1 + termo2;
        printf("%i, ", proximoTermo);
        
        termo1 = termo2;
        termo2 = proximoTermo;
        
        contador++;
    }
    
    getchar();
    
    return 0;
}

int progressaoAritmetica()
{
    int incremento = 0, quantidadeTermos = 0;

    printf("PROGRAMA QUE FAZ A PROGRESSAO ARITMETICA\n\n");
    
    printf("Insira o valor do incremento: ");
    scanf("%i", &incremento);
    
    printf("Insira a quantidade de termos a ser exibida: ");
    scanf("%i", &quantidadeTermos);
    
    int i = 0;    
    int somatoria = 0;
    
    do
    {
        somatoria = somatoria + incremento;
        printf("%i, ", somatoria);
        
        i++;
    }
    while (i != quantidadeTermos);
    
    getchar();
    
    return 0;
}

int fatorial_com_while()
{
    int numero = 0;
    
    printf("PROGRAMA QUE CALCULA O FATORIAL\n\n");
    
    printf("Insira numero para calculo de fatorial: ");
    scanf("%i", &numero);
    fflush(stdin);
    
    int fatorial = 1;
    
    while(numero > 1)
    {
        fatorial = fatorial * numero;
        numero--;
    }
    
    printf("O fatorial do numero inserido  eh %i", fatorial);
    
    getchar();
    
    return 0;
}

int fibonacci_com_while()
{
    int termo1 = 1, termo2 = 0, proximoTermo = 0, posicao = 0;
    
    printf("PROGRAMA SEQUENCIA FIBONACCI\n\n");
    
    printf("Insira ate qual termo da sequencia fibonacci vc quer ver: ");
    scanf("%i", &posicao);
    fflush(stdin);
    
    int contador = 0;
    
    while(contador < posicao)
    {
        proximoTermo = termo1 + termo2;
        printf("%i  ", proximoTermo);
        
        termo1 = termo2;
        termo2 = proximoTermo;
        
        contador++;
    }
    
    getchar();
    
    return 0;
}

int PA_com_while()
{
    int numero = 1, posicaoDesejada = 0;
    
    printf("PROGRAMA QUE FAZ A PROGRESSAO ARITMETICA\n\n");
    
    printf("Insira até qual termo quer ver: ");
    scanf("%i", &posicaoDesejada);
    fflush(stdin);
    
    printf("Insira o valor do primeiro termo: ");
    scanf("%i", &numero);
    fflush(stdin);
    
    int contador = 0;
    int somatoria = 0;
    
    while(contador < posicaoDesejada)
    {
        somatoria = somatoria + numero;
        printf("%i ", somatoria);
        contador++;
    }
    
    getchar();
    
    return 0;
}

int fatorial_com_for()
{
    int fatorial = 1, numero = 0;
    
    printf("PROGRAMA QUE CALCULA O FATORIAL\n\n");
    
    printf("Insira numero para calculo de fatorial: ");
    scanf("%i", &numero);
    fflush(stdin);
    
    for (;(numero > 1); numero--)
    {
        fatorial = fatorial * numero;
    }
    
    printf("O fatorial do numero inserido  eh %i", fatorial);
    
    getchar();
}

int fibonacci_com_for()
{
    int termo1 = 1, termo2 = 0, proximoTermo = 0, posicao = 0;
    
    printf("PROGRAMA SEQUENCIA FIBONACCI\n\n");
    
    printf("Insira ate qual termo da sequencia fibonacci vc quer ver: ");
    scanf("%i", &posicao);
    fflush(stdin);
    
    for(int i = 0;(i < posicao);i++)
    {
        proximoTermo = termo1 + termo2;
        printf("%i ", proximoTermo);
        
        termo1 = termo2;
        termo2 = proximoTermo;
    }
    
    getchar();
}

int PA_com_for()
{
    int numero = 0, posicaoDesejada = 0;
    int somatoria = 0;
    
    printf("PROGRAMA QUE FAZ A PROGRESSAO ARITMETICA\n\n");
    
    printf("Insira até qual termo quer ver: ");
    scanf("%i", &posicaoDesejada);
    fflush(stdin);
    
    printf("Insira o valor do primeiro termo: ");
    scanf("%i", &numero);
    fflush(stdin);
    
    for (int i = 0;(i < posicaoDesejada);i++)
    {
        somatoria = somatoria + numero;
        printf("%i ", somatoria);
    }
    
    getchar();
}

int Acha_maior_e_menor()
{
    int quantidadeNumeros = 0;
    int maiorNumero = 0, menorNumero = 0;
    
    printf("PROGRAMA QUE ACHA O MAIOR E O MENOR DOS NUMEROS INSERIDOS\n\n");
    
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
    for(int i = 0; i <= quantidadeNumeros; i++)
    {
            printf("%i; ", n[i]);     
    }
    
    getchar();
    
    return 0;
}

int Acha_maior_e_menor_Inverso()
{
    int quantidadeNumeros = 0;
    int maiorNumero = 0, menorNumero = 0;
    
    printf("PROGRAMA QUE ACHA O MAIOR E O MENOR DOS NUMEROS INSERIDOS\n\n");
    
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
    
    printf("Os valores inseridos foram (em ordem inversa): ");
    for(int i = (quantidadeNumeros - 1); i >= 0; i--)
    {
        printf("%i; ", n[i]);     
    }
    
    getchar();
    
    return 0;
    
}

int Eleva_Numeros()
{
    int quantidadeNumeros = 0, expoente = 0;
    
    //Inicializando dois vetores:
    int n [100];
    int n_elevado[100];
    for (int i = 0; i <= 99; i++) 
    {
        n[i] = 0;
        n_elevado[i] = 1;
    }
    
    printf("PROGRAMA QUE ACHA O MAIOR E O MENOR DOS NUMEROS INSERIDOS\n\n");
    
    //Pede a quantidade de valores
    printf("Insira a quantidade de numeros a serem analisados (limite de 100): ");
    do
    {
        scanf("%i", &quantidadeNumeros);
        fflush(stdin);
    }
    while (quantidadeNumeros > 100);
    
    //Pede para inserir valores dentro do vetor
    for(int i = 0; i < quantidadeNumeros; i++)
    {
        printf("Insira o %io numero: ", (i + 1));
        scanf("%i", &n[i]);
        fflush(stdin);
    }
    
    //pede o expoente desejado
    printf("\nA sequencia inserida será elevada a um expoente, \nEscolha o expoente: ");
    scanf("%i", &expoente);
    fflush(stdin);
    
    //Faz o calculo da potenciação e insere em outro vetor (n_elevado[])
    for (int i = 0; i < quantidadeNumeros; i++)
    {
        for(int j = 0; j < expoente; j++)
        {
            n_elevado[i] = n_elevado [i] * n[i];        
        }
    }
    
    //Mostra os valores que o usuario inseriu
    printf("\nSequencia inserida:\n");
    for(int i = 0; i < quantidadeNumeros; i++)
    {
        printf("%i; ", n[i]);     
    }
    
    //Mostra os valores inseridos pelo usuario, elevados ao expoente.
    printf("\n\nSequencia elevada:\n");
    for(int i = 0; i < quantidadeNumeros; i++)
    {
        printf("%i; ", n_elevado[i]);     
    }
    
    getchar();
    
    return 0;
}

int tamanhoString()
{
    char palavra[9];
    int contador = 0;
    int numeroCaracteres = 0;
    
    for (int i = 0; i <= 9; i++)
    {
        palavra [i] = '\0';
    }
    
    printf("PROGRAMA QUE IDENTIFICA O TAMANHO DE UMA PALAVRA\n\n");
    printf("Insira uma palavra: ");
    scanf("%s", palavra);
    fflush(stdin);
    
    while(contador != 10)
    {
        if (palavra[contador] != '\0')
        {
            numeroCaracteres++;
        }
        
        contador++;
    }
    
    printf("O numero de caracteres inseridos eh :%i", numeroCaracteres);
    
    fflush(stdin);
    getchar();

    return 0;
}

int quantidadeCharEmString()
{
    char palavra[9];
    int contador = 0;
    char letra = '0';
    int quantidadeLetrasRepetidas = 0;
    
    for (int i = 0; i <= 8; i++)
    {
        palavra [i] = '\0';
    }
    
    printf("PROGRAMA QUE IDENTIFICA QUANTAS VEZES UMA LETRA SE REPETE NUMA PALAVRA\n\n");
    
    printf("\n\nInsira uma letra: ");
    scanf("%c", &letra);
    fflush(stdin);
    
    printf("Insira uma palavra: ");
    scanf("%s", palavra);
    fflush(stdin);
    
    printf("\n");
    
    while(contador != 9)
    {
        if (palavra[contador] == letra)
        {
            quantidadeLetrasRepetidas++;
        }
        
        contador++;
    }
    
    printf("A letra %c eh repetida %i vezes na palavra %s", letra , quantidadeLetrasRepetidas, palavra);
    
    fflush(stdin);
    getchar();

    return 0;
}

int checaSePalavraPalindromo()
{
    char palavra[10];
    char palavraReversa [10];
    
    int numeroCaracteres = 0;
    int ehPalindromo = 0;
    
    //Inicializa vetores
    for (int i = 0; i <= 9; i++)
    {
        palavra [i] = '\0';
        palavraReversa [i] = '\0';
    }
    
    //
    printf("CHECA SE A PALAVRA EH PALINDROMO\n\n");
    
    //Pede palavra
    printf("Insira uma palavra: ");
    scanf("%s", palavra);
    fflush(stdin);
    
    //Descobre tamanho da string
    for (int i = 0; i <= 9; i++)
    {
        if (palavra[i] != '\0')
        {
            numeroCaracteres++;
        }
    }
    
    //Tramites palavraReversa
    int j = (numeroCaracteres - 1);
    
    for (int i = 0; i <= (numeroCaracteres - 1); i++)
    {
        palavraReversa [i] = palavra[j];
        j--;
    }
    
    //Checa se eh palindromo
    for (int i = 0; i <= 9; i++)
    {
        if (palavra [i] == palavraReversa [i])
        {
            ehPalindromo = 1;
        }
        else
        {
            ehPalindromo = 0;
            break;
        }
    }
    
    printf ("\n\nPalavras: %s, %s\n\n", palavra, palavraReversa);
    printf("Tamanho da palavra = %i letras.\n\n", numeroCaracteres);
    
    if (ehPalindromo) printf("Eh palindrome!!!");
    else printf("Num ew palindrome!!!");
    
    fflush(stdin);
    getchar();

    return 0;
}

int maiuscularString()
{
	char palavra [10];
	char palavraMaiuscula [10];
	
	int numeroCaracteres = 0;
	
	//Inicializa vetores
    for (int i = 0; i <= 9; i++)
    {
        palavra [i] = '\0';
        palavraMaiuscula [i] = '\0';
    }
	
	printf("MAISCULA A PALAVRA INSERIDA PELO USUARIO\n\n");
	
	//Recebe uma palavra
	printf("Insira uma palavra: ");
	scanf("%s", palavra);
	fflush(stdin);
	
	//Descobre quantos caracteres tem na palavra
	for (int i = 0; i <= 9; i++)
	{
		if (palavra[i] != '\0') numeroCaracteres++;
	}
	
	//Transpõe para outro vetor a palavra em Maiusculo
	for (int i = 0; i <= (numeroCaracteres - 1); i++)
	{
		palavraMaiuscula[i] = palavra[i] - 32;
	}
	
	printf("\nPalavra inserida: %s\n", palavra);
	printf("Palavra inserida imaculada: %s\n", palavraMaiuscula);
	
	getchar ();
	
	return 0;
}

int copiarString()
{
    char palavra [10];
	char palavraCopiada [10];
	
	//Inicializa vetores
    for (int i = 0; i <= 9; i++)
    {
        palavra [i] = '\0';
        palavraCopiada [i] = '\0';
    }
	
	printf("COPIA UMA STRING PARA OUTRA\n\n");
	
	//Recebe uma palavra
	printf("Insira uma palavra: ");
	scanf("%s", palavra);
	fflush(stdin);
	
	//Transpõe para outro vetor a palavra inserida
	for (int i = 0; i <= 9; i++)
	{
		palavraCopiada[i] = palavra[i];
	}
	
	printf("Palavra inserida: %s\n", palavra);
	printf("Palavra inserida so que copiada: %s\n", palavraCopiada);
	
	getchar ();
	
	return 0;
}

int concatenaStrings()
{
	char palavra1[10], palavra2[10];
    char palavraConcatenada[20];
    
    //Inicializa os vetores
    for (int i = 0; i <= 9; i++) 
    {
    	palavra1[i] = '\0';
    	palavra2[i] = '\0';
	}
	
    for (int i = 0; i <= 19; i++) palavraConcatenada[i] = '\0';
    
    int tamanhoPalavra1 = 0, tamanhoPalavra2 = 0;
    
    printf("PROGRAMA QUE CONCATENA DUAS PALAVRAS\n\n");
    
    printf("Insira a primeira palavra: ");
    scanf("%s", palavra1);
    fflush(stdin);
    
    printf("Insira a segunda palavra: ");
    scanf("%s", palavra2);
    fflush(stdin);
    
    //Descobre o tamanho das palavras
    for (int i = 0; i <= 9; i++)
    {
    	if (palavra1 [i] != '\0') tamanhoPalavra1++;
    	if (palavra2 [i] != '\0') tamanhoPalavra2++;
	}
	
	for (int i = 0; i <= (tamanhoPalavra1 - 1); i++)
	{
		palavraConcatenada[i] = palavra1[i];
	}
	
	for (int i = tamanhoPalavra1; i <= (tamanhoPalavra1 + tamanhoPalavra2); i++)
	{
		palavraConcatenada[i] = palavra2[i - tamanhoPalavra1];
	}
	
	printf("A palavra concatenada ficou assim: %s", palavraConcatenada);
	
	getchar();
		
	return 0;
}

int checaSeFrasePalindromo()
{
    char frase[30];
    char fraseReversa [30];
    
    int tamanhoFrase = 0;
    int ehPalindromo = 0;
    
    //Inicializa vetores
    for (int i = 0; i <= 29; i++)
    {
        frase [i] = '\0';
        fraseReversa [i] = '\0';
    }
    
    //
    printf("CHECA SE A frase EH PALINDROMO\n\n");
    
    //Pede frase
    printf("Insira uma frase: ");
    scanf("%[^\n]", frase);
    fflush(stdin);
    
    //Descobre tamanho da string
    for (int i = 0; i <= 29; i++)
    {
        int caractereValido = frase[i] != '\0';
        
        if (caractereValido)
            tamanhoFrase++;
    }
    
    //Inverte frase e guarda em fraseReversa
    int j = (tamanhoFrase - 1);
    
    for (int i = 0; i <= (tamanhoFrase - 1); i++)
    {
        fraseReversa [i] = frase[j];
        j--;
    }
    
    //Checa se eh palindromo
    for (int i = 0; i <= 29; i++)
    {
        if (frase [i] == fraseReversa [i])
        {
            ehPalindromo = 1;
        }
        else
        {
            ehPalindromo = 0;
            break;
        }
    }
    
    printf ("\n\nfrases: %s, %s\n\n", frase, fraseReversa);
    printf("Tamanho da frase = %i letras.\n\n", tamanhoFrase);
    
    if (ehPalindromo) printf("Eh palindrome!!!");
    else printf("Num ew palindrome!!!");
    
    fflush(stdin);
    getchar();

}

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

//recursivas...
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