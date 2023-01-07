#include <stdio.h>

int main(){

    int A, B, R, d, c, rep;
    // printf("donner deux entiers : ");
    // scanf("%d %d", &A, &B);
    // R = A%B;
    // d = A;
    // c = B;
    // while (R != 0)
    // {
    //     A = B;
    //     B = R;
    //     R = A%B;
    // }
    // printf("PGCD(%d,%d)=%d",d,c,B);

    do
    {
        printf("donner deux entiers : ");
        scanf("%d %d", &A, &B);
        R = A%B;
        d = A;
        c = B;
        while (R != 0)
        {
            A = B;
            B = R;
            R = A%B;
        }
        printf("PGCD(%d,%d)=%d \n",d,c,B);
        
        printf("voulez-vous continuez ? 0 // 1\n");
        scanf("%d", &rep);

    } while (rep != 0);

    printf("FINISH");
    
    
    return 0;
}