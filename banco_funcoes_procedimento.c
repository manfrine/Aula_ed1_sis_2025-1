// BANCO FAMETRO

#include<stdio.h>

float saldo(int id, float valor){

    return valor;
}

float depositar(int id, float valor, float valordeposito){
    valor += valordeposito;
    return valor;
}

float sacar(int id, float valor, float valordeposito){
    valor -= valordeposito;
    return valor;
}

main(){
    int a=0, b, c=0;
    float vlr = 0.0, vlrdeposito, vlrsaque;

    do{
        printf("\n##BANCO FAMETRO ###");
        printf("\n1 - VER SALDO ");
        printf("\n2 - DEPOSITAR");
        printf("\n3 - SACAR");
        printf("\nEscolha uma opção: ");
        scanf("%d", &b);
        switch(b){
        case 1:
            printf("\n**** SALDO **** ");

            printf("O saldo da conta: R$ %f", saldo(c, vlr));

            break;
        case 2:
            printf("\n**** DEPOSITAR **** ");
            printf("\nDigite o valor do deposito: ");
            scanf("%f", &vlrdeposito);

            vlr = depositar(c, vlr, vlrdeposito);

            printf("O saldo da conta: R$ %f", saldo(c, vlr));
            break;
        case 3:
            printf("\n**** SACAR **** ");

            printf("\nDigite o valor do saque: ");
            scanf("%f", &vlrsaque);

            vlr = sacar(c, vlr, vlrsaque);

            printf("O saldo da conta: R$ %f", saldo(c, vlr));
            break;
        default:
                printf("\n**** FUNÇÃO INDISPONIVEL ****: ");
        }

        printf("\nDigite 1 p/ retornar para o menu: ");
        scanf("%d", &a);
    }while(a !=0 );
}
