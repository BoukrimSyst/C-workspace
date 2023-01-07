#include <stdio.h>

int main(int argc, char **argv){
    

    double salaire_fixe;
    double commission1 = 2;
    double commission2 = 1.5;
    double chiffre_affaire;
    double salaire_mensuel;

    printf("donner le salaire fixe :\n");
    scanf("%lf", &salaire_fixe);

    printf("donner le chiffre d'affaire :\n");
    scanf("%lf", &chiffre_affaire);

    

    if(chiffre_affaire>100000){
        salaire_mensuel = salaire_fixe + commission1*(chiffre_affaire/100);
        printf("le salaire mensuel est : %.0lf", salaire_mensuel);
    }
    else if(chiffre_affaire>30000){
        salaire_mensuel = salaire_fixe + commission2*(chiffre_affaire/100);
        printf("le salaire mensuel est : %.0lf", salaire_mensuel);
    }
    else{
        printf("pas de commission\n");
        printf("le salaire est : %.0lf", salaire_fixe);
    }

    return 0;

}