#include <stdio.h>
#include <stdlib.h>

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