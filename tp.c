#include <stdio.h>
#define n 99

int main(){
    int i, T[n];
    printf("voila le tableau :\n");
    for(i=2; i<=n; i++){
        if(i%2==0){
            printf("%d  ", i);
        }
    }
    return 0;
}
