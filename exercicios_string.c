#include<stdio.h>

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