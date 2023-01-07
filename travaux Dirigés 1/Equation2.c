#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    //programme pour résoudre les équations de 2eme degres

    double x1, x2 , a, b, c, delta;
    printf("saisir a, b, c\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta= (b*b)-(4*a*c);

    if(delta==0.0){
        x1= -b/(2*a);
        printf("l'equation admet une solution unique: x = %.2lf", x1);
        return 0;
    }

    if(delta>0.0){
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("l'equation admet deux  solutions x1 = %.2lf et x2 = %.2lf\n", x1, x2);
        return 0;
    }

    if(delta<0.0){
        printf("l'equation n'admet pas de solution");
        return 0;
    }
    return 0;
}
