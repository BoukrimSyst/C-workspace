#include <stdio.h>


    int main(int argc, char const *argv[]){
        double note1, note2, note3, moyenne;

        printf("saisir les notes des trois matieres : \n");
        scanf("%lf %lf %lf", &note1, &note2, &note3);

        if (note1>20 || note1<0 || note2>20 || note2<0 || note3>20 || note3<0){
            printf("Les notes saisies sont valides s'ils appartiennent bien à l'intervalle [0;20].");
            return 0;
        }

        moyenne = (note1+ note2 + note3)/3;
        
        if(moyenne<10){
            printf("moyenne : %.2lf\n", moyenne);
            printf("Non admis");
            return 0;
        }
        if(moyenne>=10 && moyenne<12){
            printf("moyenne : %.2lf\n", moyenne);
            printf("Admis avec mention passable");
            return 0;

        }
        if(moyenne>=12 && moyenne<14){
            printf("moyenne : %.2lf\n", moyenne);
            printf("Admis avec mention assez bien");
            return 0;
        }
        if(moyenne>=14 && moyenne<=20){
            printf("moyenne : %.2lf\n", moyenne);
            printf("Admis avec mention bien");
        }

        return 0;
}