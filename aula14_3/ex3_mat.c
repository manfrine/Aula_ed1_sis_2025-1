//CONTE OS PARES E OS IMPARES DO TRIANGULO
// INFERIOR DA MATRIZ
main(){
    int mat[3][3], l=0, c=0, cp=0, ci=0;

    for(l=0; l<3; l++){
       for(c=0; c<3; c++){
            printf("\nDigite um numero: ");
            scanf("%d", &mat[l][c]);
            if(l>c){
                if(mat[l][c] %2 ==0)
                    cp++;
                else
                    ci++;
            }
       }
    }
    printf("\n### A MATRIZ ###\n");
    for(l=0; l<3; l++){
       for(c=0; c<3; c++){
            printf(" %d", mat[l][c]);
       }
       printf("\n");
    }

    printf("\n### O TRIÂNGULO INFERIOR DA MATRIZ ###\n");
    for(l=0; l<3; l++){
       for(c=0; c<3; c++){
         if(l>c)
            printf(" %d", mat[l][c]);
       }
       printf("\n");
    }

    printf("\n@@@ A QTD DE PAR: %d", cp);
    printf("\n@@@ A QTD DE IMPAR: %d", ci);
}
