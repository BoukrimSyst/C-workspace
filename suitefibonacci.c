#include <stdio.h>

int main(){
    int n, i, u, upp, up;
    do{
        printf("donner la valeur de n : \n");
        scanf("%d",&n);
    } while (n<2);

        upp = 0;
        up = 1;
        printf("les termes de la suites sont : \n");
        printf("U%d = %d\n", upp, upp);
        printf("U%d = %d\n", up, up);
        for ( i = 2; i <= n; i++)
        {
            u = upp + up;
            printf("U%d = %d\n", i, u);
            upp = up;
            up = u;
        }
        return 0;

   
    return 0;
}