//Faça um programa que preencha um vetor com 10 números reais, calcule e
//mostre a quantidade de números negativos e a soma dos números positivos
//desse vetor, declare o vetor com seu nome


main(){

    int x = 0, sum=0, i=0, ma=0.0, me=0.0;
    int num[10];
    float alt[10], altm=0.0, altme=3.0;

    do{
        printf("\nDigite um numero do atleta:");
        scanf("%d", &num[i]);
       // printf("\nteste ->>> %d", num[i]);
        printf("\nDigite a altura");
        scanf("%f", &alt[i]);

        if(alt[i]> altm){
            altm = alt[i];
           // printf("\nteste 2222 ->>> %f", altm);
            ma = num[i];
        }
        if(alt[i] < altme){
            altme = alt[i];
            me = num[i];
        }

        i++;
    }while( i<2 );

       printf("\nA matricula do maior: %d", ma);
       printf("\nA altura do maior: %f", altm);

       printf("\nA matricula do menor: %d", me);
       printf("\nA altura do menor: %f", altme);
       //printf("\nO menor, matricula: %d, altura: %f", altme, me);



}
