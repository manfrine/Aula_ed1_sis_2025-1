
main(){

    int mat[3][3], l=0, c=0, soma=0;

    for(l=0; l<3; l++){
       for(c=0; c<3; c++){
            printf("\nDigite um numero: ");
            scanf("%d", &mat[l][c]);
            if(l==c)
                soma+=mat[l][c];
       }
    }
    printf("\n### A DIAGONAL PRINCIPAL DA MATRIZ ###\n");
    for(l=0; l<3; l++){
       for(c=0; c<3; c++){
          if(l==c)
            printf(" %d", mat[l][c]);
       }
       //printf("\n");
    }

    printf("\n@@@ A SOMA DA DIAGONAL PRINCIAL: %d", soma);
}
