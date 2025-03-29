
//Faça um procedimento que recebe 1 valor para o limite máximo
//e mostre a soma de todos os valores desse intervalo

#include<stdio.h>

void retornar(int i){
    int s =0;
    while(i > 1){
        s=s+i;
        printf("\nO numero: %d e a soma: %d", i,s);
        i--;
    }
}

main(){

    int a, b;

    printf("\nDigite um número para o maximo: ");
    scanf("%d", &a);



    retornar(a);

}
