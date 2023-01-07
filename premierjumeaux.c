#include <stdio.h>
#include <math.h>

int main(){
    int i,j,n,k, prec;

    printf("donner n : \n");
    scanf("%d",&n);

    prec = 2;

    for(i=3;i<=n;i++){
        k=0;
        for(j=1;j<=i;j++) 
            if(i%j==0){
                k++;
            }
            if(k==2){
                if(i - prec == 2){
                    printf("%d et %d \n", prec, i);
                }
                prec = i;
            }        
    }
    return 0;

}