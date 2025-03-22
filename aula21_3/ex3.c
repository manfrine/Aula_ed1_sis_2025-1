
#include<stdio.h>
#include<locale.h>

//3)	CRIE UMA MATRIZ 3X3 E MOSTRE OS ELEMENTOS DO
// TRIANGULO SUPERIOR DA MATRIZ, NO FINAL MOSTRE TAMBEM APRESENTE A MATRIZ

main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
       int mat[3][3], l=0, c=0, s=0;
       //entrada de dados
       for(l=0;l<3;l++){
            for(c=0;c<3;c++){
                printf("\nDigite um numero inteiro na matriz[%d][%d] = ", (l+1), (c+1));
                scanf("%d", &mat[l][c]);
                   // if(l==c)
                      //  s = s+mat[l][c];
            }//for da coluna
       }//for da linha

       printf("\nA MATRIZ\n ");
        for(l=0;l<3;l++){
            for(c=0;c<3;c++){
                printf(" %d", mat[l][c]);
            }//for da coluna
            printf("\n");
       }//for da linha

              printf("\nO TRIANGULO SUPERIOR DA MATRIZ\n ");
        for(l=0;l<3;l++){
            for(c=0;c<3;c++){
               if(c>l)
                printf(" %d", mat[l][c]);
            }//for da coluna
            printf("\n");
       }//for da linha

}
