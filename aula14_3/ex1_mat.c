
main(){

    int mat[3][3], l=0, c=0;

    for(l=0; l<3; l++){
       for(c=0; c<3; c++){
            printf("\nDigite um numero: ");
            scanf("%d", &mat[l][c]);
       }
    }
    printf("\n### A MATRIZ ###\n");
    for(l=0; l<3; l++){
       for(c=0; c<3; c++){
            printf(" %d", mat[l][c]);
       }
       printf("\n");
    }

}
