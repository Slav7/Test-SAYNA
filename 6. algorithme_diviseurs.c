#include <stdio.h> 

 main(){
    int X,M,I;
    printf("Donner un entier X");
    scanf("%d", &X);
     
    for (I=1;I<=M;I++){
        M = X%I;
        if (M == 0)
            printf("%d",I);
    }

    printf("%d",X);
 }