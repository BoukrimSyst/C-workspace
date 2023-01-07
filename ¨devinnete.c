#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int n, x, i, a, c=0, d=100;
    srand(time(NULL));

    printf("devinette d'un nombre entre 0 et 100\n ");
    printf("donner le nombre d'essais  : ");

    scanf("%d", &n);
     
        x= c + rand()%(d+1-c);
    
    for(i=1; i<=n; i++){
        printf("devinnete %d\n", i);
        scanf("%d", &a);
        if(a==x){
            printf("bravo !!\n");
            printf("le nombre devinnete %d\n", i);

            //i=2*n;
        }

        else if(a<x){
            printf("trop petit !\n");
        }
        else
            printf("trop grand !\n");
    }
    if(i==n+1){
        printf("vous aver perdus !\n");
        printf("le nombre devinnete est %d\n", i);
    }
}