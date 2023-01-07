#include <stdio.h>

int main(){
    int n, i, M;
    printf("donner un entier : ");
    scanf("%d", &n);

    i = 0;
    M = 1;

    while(M <= n){
        i = i+1;
        M = M*2;
    }

    printf("le plus grand i est : %d", i-1);

}