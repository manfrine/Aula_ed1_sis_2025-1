#include<stdio.h>

int main(){
       
       int idade[5], i=0;
       float salario[5];
       char nome[5][10];
       
       //entrada de dados
       for(i=0;i<3;i++){
             printf("\nDigite a idade");
             scanf("%d", &idade[i]);
             printf("\nDigite o salario");
             scanf("%f", &salario[i]);
             printf("\nDigite o nome");
             scanf("%s", &nome[i]);
       }
       //saida de dados
       for(i=0; i<3;i++){
             printf("\nA idade: %d", idade[i]);
             printf("\nO salario: R$ %f", salario[i]);
             printf("\nO nome: R$ %s", nome[i]);
       }
       return 0;
}
