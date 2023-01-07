#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,D;

    printf("donner les coefficients a, b, et c\n");
    scanf("%lf %lf %lf",&a, &b, &c);

    if(a==0){
        if(b==0)
        {
            printf("Aucune solution dans R");
        }
        else
            printf("une seul solution dans R : %.2lf ", -c/b);
    }
    else{
        D = (b*b)-(4*a*c);
        if(D<0)
        {
            printf("pas de solution dans R");
        }
        else
        {
            if(D==0){
                printf("une solution dans R : %.2lf ", -b/(2*a));
            }
            else
                printf("deux solutions dans R : %.2lf et %.2lf ",(-b-sqrt(D))/(2*a),(-b+sqrt(D))/(2*a));
        }
        
    }

}