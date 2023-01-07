#include <stdio.h>
#define n 5

int main(){
    int i, T[n];
    printf("donner les %d entiers : ", n);
    for(i=0; i<n; i++){
        scanf("%d", &T[i]);
    }

    printf("voila les %d entiers : \n", n);
    for(i=0; i<n; i++){
        printf("%d  ", T[i]);
    }

    printf("\n voila l'accumulation :\n");
    for(i=0; i<=n-2; i++){
        T[i+1] += T[i];
    }
    
    for(i=0; i<n; i++){
        printf("%d  ", T[i]);
    }

    return 0;
}