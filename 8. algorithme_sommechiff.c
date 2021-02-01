#include <stdio.h> 

 main(){
    int N,S,R;
    printf("Donner un entier narurel N");
    do{
        scanf("%d", &N);
    } while (N<0);

    S=0; R=0;
     
    while(R>0){
        S=(S+R)%10;
        R=R/10;
    }
    printf("La somme de chiffres qui composent %d est %d",N,S);
    
 }