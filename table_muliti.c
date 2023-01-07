#include <stdio.h>

int main(){
    int i, a;
    printf("entrer un entier :");
    scanf("%d",&a);

    for(i=1; i<=9; i+=1){
        printf(" %d X %d = %d\n",i, a, i*a);
    }
}