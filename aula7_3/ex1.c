#include<stdio.h>
main(){

    char nome[10][10], status[10][10], x[10];
    float valor[10], vlraluguel=0.0;
    int a=0, b=0, c=0, d=0, i=0, qtddias=0;

    do{
        printf("\nSISTEMA DE ALUGUEL FAMETRO !!");
        printf("\n1 - CADASTRAR");
        printf("\n2 - EXIBIR");
        printf("\n3 - BUSCAR");
        printf("\n4 - ALUGAR");
        printf("\n5 - LISTAR OS ALUGADOS");

        printf("\n\n ESCOLHA UMA OPCAO ");
        scanf("%d", &b);
        switch(b){
            case 1:
                printf("\nMODULO DE CADASTRAR\n");
                printf("\nDIGITE O MODELO DO CARRO: ");
                scanf("%s", &nome[i]);
                printf("\nDIGITE O VALOR DO ALUGUEL DO CARRO: ");
                scanf("%f", &valor[i]);

                strcpy(status[i], "DISPONIVEL");

                printf("\nCARRO CADASTRADO COM SUCESSO ! ");
                i++;
                break;
            case 2:
                printf("\nMODULO DE LISTAR\n");
                for(c=0; c<i; c++){
                    printf("\nO carro: %s", nome[c]);
                    printf("\nO VALOR carro: R$ %.2f", valor[c]);
                    printf("\nO status do carro: %s", status[c]);
                    printf("\n-------------------");
                }
                break;

            case 3:
                    printf("\nMODULO DE BUSCA\n");
                    printf("\nDIGITE O MODELO DO CARRO P/ A BUSCA: ");
                    scanf("%s", &x);

                    for(c=0; c<i; c++){
                         if(strcmp(x, nome[c])==0){
                            printf("\nCARRO ENCONTRADO !");
                            printf("\nO carro: %s", nome[c]);
                            printf("\nO VALOR carro: R$ %.2f", valor[c]);
                            printf("\nO status do carro: %s", status[c]);
                            printf("\n-------------------");
                         }
                    }

                break;
            case 4:
                    printf("\nMODULO DE ALUGUEL\n");
                    printf("\nDIGITE O MODELO DO CARRO P/ A ALUGAR: ");
                    scanf("%s", &x);

                    for(c=0; c<i; c++){
                         if(strcmp(x, nome[c])==0){
                            printf("\nCARRO ENCONTRADO !");
                            printf("\nO carro: %s", nome[c]);
                            printf("\nO VALOR carro: R$ %.2f", valor[c]);
                            printf("\nO status do carro: %s", status[c]);
                            printf("\n-------------------");

                            printf("\nDIGITE A QTD DE DIAS QUE DESEJA ALUGAR: ");
                            scanf("%d", &qtddias);

                            vlraluguel = qtddias*valor[c];

                            strcpy(status[c], "ALUGADO");
                            printf("\n### O VALOR DO ALUGUEL: R$ %.2f", vlraluguel);
                            printf("\n$$ carro alugado com sucesso !!! ###: ");
                         }
                    }

                break;

            case 5:

                printf("\n####LISTANDO SOMENTE OS ALUGADOS #### ");
                for(c=0; c<i; c++){
                         if(strcmp(status[c],"ALUGADO") ==0){
                            printf("\nCARRO ENCONTRADO !");
                            printf("\nO carro: %s", nome[c]);
                            printf("\nO VALOR carro: R$ %.2f", valor[c]);
                            printf("\nO status do carro: %s", status[c]);
                            printf("\n-------------------");
                         }
                    }
                break;
            case 6:

                printf("\n####LISTANDO SOMENTE OS DISPONIVEIS #### ");
                for(c=0; c<i; c++){
                         if(strcmp(status[c],"DISPONIVEL") ==0){
                            printf("\nCARRO ENCONTRADO !");
                            printf("\nO carro: %s", nome[c]);
                            printf("\nO VALOR carro: R$ %.2f", valor[c]);
                            printf("\nO status do carro: %s", status[c]);
                            printf("\n-------------------");
                         }
                    }
                break;

            default:
                printf("\nESTA OPCAO ESTÁ EM DESENVOLVIMENTO !");
        }

        printf("\nDigite 1 p/ retornar ao menu ou 0 (zero) para sair !!");
        scanf("%d", &a);
    }while(a!=0);

}
