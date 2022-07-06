#include<stdio.h>
#include<stdlib.h>
#define TAM 10

int main(int argc, char *argv[]){
    //Defini��o de variaveis
    int opcao;
    int valor, binario[TAM], aux;

    /* Titulo, vers�o do programa e
    op��es de convers�o decimal do programa*/
    printf ("\t <<Conversor de base Decimal 1.00>> \n");
    printf ("1 - Decimal para Hexadecimal: \n");
    printf ("2 - Decimal para Octal: \n");
    printf ("3 - Decimal para Binario: \n");

    //Atribui��o de valor para op��o
    printf ("\t ==>Informe a opcao: ");
    scanf ("%d", &opcao);

    //Retorno do valor de caraceter lido.
    getchar ();

    //condicionamento para executar op��o de convers�o
    if (opcao == 1){
        //Op��o de convers�o HEXADECIMAL
        printf("Informe o valor em decimal: ");
        scanf ("%d", &valor);
        getchar();
        printf ("%d em base hexadecimal: %X\n", valor, valor);
    }else
        {
        if (opcao == 2){
            //Op��o de convers�o OCTAL
            printf("informe o valor decimal: ");
            scanf("%d", &valor);
            getchar();
            printf ("%d em base octal: %o\n", valor, valor);
        }
        else{
            if (opcao == 3){
                    //Op��o de convers�o BINARIA
                    printf("informe valor decimal: ");
                    scanf ("%d", &valor);

                    /* Utiliza��o de laco for para a contru��o
                    de opera��o que realiza a convers�o de numero
                    decimal para binario*/
                    for(aux = TAM -1;aux >= 0; aux--){
                        binario[aux]=(valor%2)==0 ? 0 : 1;
                        valor = valor/2;
                        }
                        printf ("em base binaria: ");
                    for (aux=0; aux < TAM; aux++){
                        printf("%d", binario[aux]);
                    }
                    //Espa�o para a ultima linha
                    printf ("\n");
                   }else{

                        //Impress�o de erro caso valor de op��o nao compativel
                        printf ("ERROR! \n");
                    }
                }
            }

    system ("PAUSE");
    return 0;
}
