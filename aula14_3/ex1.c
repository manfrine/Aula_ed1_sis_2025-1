
//Crie um  algoritmo que receba vários dados e armazene os valores positivos num
//vetor A e os negativos num vetor B, ao final apresente os 2 vetores

main(){

    int x = 0, cont=0, i=0, z=0;
    int vi[8], vp[8];

    do{
        printf("\nDigite um numero:");
        scanf("%d", &x);
        if(x > 0){
            vp[i]=x;
            vi[i]=0;
        }else{
            vi[i]=x;
            vp[i]=0;
        }
        printf("\nDigite 1 p/ continuar ou 0 p/ sair");
        scanf("%d", &cont);
        i++;
    }while(cont !=0 && i<8 );
    for(z=0; z<i; z++){
       if(vp[z] !=0 )
        printf("\nValor do vetor positivo: %d", vp[z]);
    }
        printf("\n-----------------\n");

    for(z=0; z<i; z++){
        if( vi[z] !=0 )
        printf("\nValor do vetor negativo: %d", vi[z]);
    }

}
