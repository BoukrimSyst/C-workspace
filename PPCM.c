#include <stdio.h>

int main(){
    int A, B, MA, MB, a,b;

    printf("donner deux entiers :");
    scanf("%d %d", &A, &B);

    MA = A;
    MB = B;

    a=A;
    b=B;

    while(MA != MB){
        if(MA>MB){
            MB += B;
        }
        else{
            MA += A;
        }
    }
    printf("PPCM(%d,%d)=%d", a, b, MB);

    return 0;
}