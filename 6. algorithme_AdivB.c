#include <stdio.h> 

 main(){
     int A,B,R;
     printf("Donner deux entiers A et B positifs");
     do{
        scanf("%d", &A);
        scanf("%d", &B);
     } while (A>0 && B>0);
     
    while (R>0){
        R=R-B;
    }

    if(R=0)
        printf("%d est est divisible par %d",A,B);
    else
        printf("%d est n’’est pas divisible par %d",A,B);
    
 }