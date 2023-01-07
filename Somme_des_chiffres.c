#include <stdio.h>

int main(){
    int A , B, s;
    printf("donner un entier :");
    scanf("%d", &A);
    B = A;
    s = 0;

        while(B != 0){
            s = s+(B%10);
            B = B/10;
        }

    printf("%d", s);
    return 0;
}