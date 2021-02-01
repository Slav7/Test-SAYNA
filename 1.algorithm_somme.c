#include <stdio.h> 

 main(){
    int I,N,S;
    S = 0;
     for (I=1;I<N;I++){
          printf("Donner un entier N");
         scanf("%d", &N);
          S += N;
    }
     printf("La somme des %d premiers nombres est: %d\n",N, S);
    return 0;
}