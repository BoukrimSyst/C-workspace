#include <stdio.h>

int main(){
    int i, N;

    printf("donner un nombre :");
    scanf("%d",&N);

    for(int i=1; i<=N; i+=1){
        printf("i = %d\n",i);
    }
}

