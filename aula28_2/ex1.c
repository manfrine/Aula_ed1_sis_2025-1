
#include<stdio.h>


main(){
       
       int a[5], i=0;
       //entrada de dados
       for(i=0;i<5;i++){
             printf("\nDigite um numero inteiro na %da. posicao ", (i+1));
             scanf("%d", &a[i]);
       }
       
       //saida de dados
       for(i=0; i<5;i++){
             printf("\nO valor: ", a[i]);
       }
}
