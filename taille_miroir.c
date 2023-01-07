#include <stdio.h>
#include <math.h>

void main(){

    int R,N,j,M,a;
    printf("donner un nombre :");
    scanf("%d",&N);

    j=0;
    a=N;
    M=0;
    while(N != 0){
        j += 1;
        N = N/10;
    }
    printf("la taille du nombre est : %d", j);

    while(a != 0){
        R = a%10;
        M = M+R*pow(10,j-1);
        a = a/10;
        j = j-1;
    }
    printf("le miroir est %d ", M);
}