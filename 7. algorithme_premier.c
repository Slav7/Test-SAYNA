#include <stdio.h> 

 main(){
    int X,M,I,Pr;
    printf("Donner un entier X");
    scanf("%d", &X);

    if(X==1)
        Pr=1;
     
    while(I<M && Pr==0){
        M=X%I;
        if (M==0){
            Pr=1;
        }
        I++;
    }

    if (Pr=0)
        printf("%d est un nombre premier",X);
    else
        printf("%d est pas un nombre premier",X);
    
 }