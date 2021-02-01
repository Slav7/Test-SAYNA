#include <stdio.h> 

 main(){
     int A,B,Q,R;
     printf("Donner deux entiers A et B");
     scanf("%d", &A);
     scanf("%d", &B);

     Q=0;
     R=A;
    while (R>B){
        Q=Q+1;
        R=R-B;
    }

    printf("Le Quotient de A/B est : %d Le reste de A/Best : %d";Q,R);
 }