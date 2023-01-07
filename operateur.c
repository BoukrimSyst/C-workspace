#include <stdio.h>

int main(){
    int S , i;
    S=0;
    i=10;
    S=i++;
    printf("S=i++;\t S=%d i=%d\n", S, i);

    S=0;
    i=10;
    S=++i;
    printf("S=++i;\t S=%d i=%d\n", S, i);

    return 0;
}