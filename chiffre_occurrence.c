#include <stdio.h>

int main(){
    int K,R,N,c;

    printf("donner un entier :");
    scanf("%d", &N);
    printf("dooner le chiffre :");
    scanf("%d", &c);

    K = 0;
    while(N!=0){
        R = N%10;
        N = N/10;
        if(R==c){
            K = K+1;
        }
    }
    printf("occurence(%d) = %d", c, K);
}