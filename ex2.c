
#include<stdio.h>

void retornar(int i, int f){

    while(i < f){
        printf("\nO numero: %d", i);
        i++;
    }
}

main(){

    int a, b;

    printf("\nDigite um n�mero para o inicio: ");
    scanf("%d", &a);

    printf("\nDigite um n�mero para o fim: ");
    scanf("%d", &b);

    retornar(a, b);

}
