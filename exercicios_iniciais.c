#include <stdio.h>

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
