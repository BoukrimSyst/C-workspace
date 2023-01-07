#include <string.h>

int main(int argc, char **argv){
    int n, i, s;

    printf("saisir un entier :");
    scanf("%d",&n);

    s = 0;
    for(i=1; i<=n; i++){
        s += i;
        printf("s est %d", s);
    }
}
