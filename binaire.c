#include<stdio.h>
#include<math.h>

void main() {

           long  N,S,a,i,R;
           printf("saisir un nombre decimal: ");
           scanf("%ld",&N);
           S=0;
           i=0;
           a=N;
           while(N!=0){

                       R=N%2;
                       S+=R*pow(10,i);
                       N=N/2;
                       i=i+1;
           }
           printf("binaire (%ld)= %ld",a,S);
}
