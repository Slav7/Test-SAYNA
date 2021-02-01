#include <stdio.h> ;
int  I,N,Max,Min,X;
Max=0;
Min=0;
main(){
    printf("Donner un entier N>0");
    do{
        scanf("%d", &N);
        if (Max<N)
            Max=N;
        if (Min>N)
            Min=N
    } while (N<0);
printf("Le Minimun des valeurs est: %d le Maximum est : %d",Min,Max); 
}