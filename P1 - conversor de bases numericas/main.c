#include<stdio.h>
#include<stdlib.h>
#define TAM 10

int main(int argc, char *argv[]){
    //Definição de variaveis
    int opcao;
    int valor, binario[TAM], aux;

    /* Titulo, versão do programa e
    opções de conversão decimal do programa*/
    printf ("\t <<Conversor de base Decimal 1.00>> \n");
    printf ("1 - Decimal para Hexadecimal: \n");
    printf ("2 - Decimal para Octal: \n");
    printf ("3 - Decimal para Binario: \n");

    //Atribuição de valor para opção
    printf ("\t ==>Informe a opcao: ");
    scanf ("%d", &opcao);

    //Retorno do valor de caraceter lido.
    getchar ();

    //condicionamento para executar opção de conversão
    if (opcao == 1){
        //Opção de conversão HEXADECIMAL
        printf("Informe o valor em decimal: ");
        scanf ("%d", &valor);
        getchar();
        printf ("%d em base hexadecimal: %X\n", valor, valor);
    }else
        {
        if (opcao == 2){
            //Opção de conversão OCTAL
            printf("informe o valor decimal: ");
            scanf("%d", &valor);
            getchar();
            printf ("%d em base octal: %o\n", valor, valor);
        }
        else{
            if (opcao == 3){
                    //Opção de conversão BINARIA
                    printf("informe valor decimal: ");
                    scanf ("%d", &valor);

                    /* Utilização de laco for para a contrução
                    de operação que realiza a conversão de numero
                    decimal para binario*/
                    for(aux = TAM -1;aux >= 0; aux--){
                        binario[aux]=(valor%2)==0 ? 0 : 1;
                        valor = valor/2;
                        }
                        printf ("em base binaria: ");
                    for (aux=0; aux < TAM; aux++){
                        printf("%d", binario[aux]);
                    }
                    //Espaço para a ultima linha
                    printf ("\n");
                   }else{

                        //Impressão de erro caso valor de opção nao compativel
                        printf ("ERROR! \n");
                    }
                }
            }

    system ("PAUSE");
    return 0;
}
