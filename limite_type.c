#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){

    printf("int :[%d ; %d]. sizeof = %d Oc\n", INT_MIN , INT_MAX, sizeof(int));
    printf("long int :[%ld ; %ld]. sizeof = %d Oc\n", LONG_MIN , LONG_MAX, sizeof(long int));
    printf("long long int :[%lld ; %lld]. sizeof = %d Oc\n", LLONG_MIN , LLONG_MAX, sizeof(long long int));
    printf("float :[%e ; %e]. sizeof = %d Oc\n", FLT_MIN , FLT_MAX, sizeof(float));
    printf("double :[%e ; %e]. sizeof = %d Oc\n", DBL_MIN , DBL_MAX, sizeof(double));


    return 0;
}