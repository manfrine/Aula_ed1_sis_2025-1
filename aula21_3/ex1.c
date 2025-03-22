
#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
       int mat[3][3], l=0, c=0, s=0;
       //entrada de dados
       for(l=0;l<3;l++){
            for(c=0;c<3;c++){
                printf("\nDigite um numero inteiro na matriz[%d][%d] = ", (l+1), (c+1));
                scanf("%d", &mat[l][c]);
                    if(l==c)
                        s = s+mat[l][c];
            }//for da coluna
       }//for da linha

        printf("\nA soma é: %d", s);

}
