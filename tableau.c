#include <stdio.h>
#define n 6

int main(){
    // float T[n];
    // int i;
    // int S=0;
    // float moy;
    // int  MC;
    // printf("donner les %d notes :\n", n);
    // for(i=0; i<n; i++){
    //     do
    //     {
    //         printf("T[%d]=", i);
    //         scanf("%f", &T[i]);
            

    //     } while (T[i]<0 || T[i]>20);
    // }
    // printf("voila les des %d notes :\n ", n);

    
    // for(i=0; i<n; i++){
    //     printf("%.2f\n", T[i]);
    // }


    // for(i=0; i<n; i++){
    //     S = S+T[i];
    // }
    // moy = S/n;
    // printf("la moyenne : %.2f\n", moy);
    

    // for(i=0; i<n; i++){
    //     if(T[i]>=moy){
    //         MC = MC+i;
    //     }
    // }

    // printf("le nombres des notes > à %.2f est %d\n", moy, MC);

    // printf("voila les notes concernées :\n");
    // for(i=0; i<n; i++){
    //     if(T[i]>=moy){
    //         printf("%.2f\n", T[i]);
    //     }
    // }
    

    /*------------------------MANIPULATION DES TABLEAUX------------------------*/
    int T[n], i, j, x, pos=-1;
    int occ=0;
    //lecture des valeurs du tableau T
    printf("donner les valeurs entiers :\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &T[i]);
    }

    //affichage des éléments du tableau 
    printf("voila les valeurs du tableau T :\n");

    for ( i = 0; i < n; i++)
    {
        printf(" | %d | \n", T[i]);
    }
    
    // //lecture d'entier x(c'est un élément dans le tableau)
    // printf("donner la valeur de x :\n");
    // scanf("%d", &x);

    // //indice min de x dans T 
    // for ( i = 0; i < n-1; i++)
    // {
    //     if(x == T[i]){
    //         pos = i;
    //         break;
    //     }
    // }

    // if(pos == -1){
    //     printf("%d n'appartient pas\n", x);
    // }
    // else printf("L'indice minimum de %d est %d\n", x, pos);

    // //calcul de nombre d'occurence de x dans T 

    // for ( i = 0; i < n-1; i++)
    // {
    //     if (x == T[i])
    //     {
    //         occ += 1;
    //     }
    // }
    // printf("le nombre d'occurence de %d est %d\n", x, occ);



    // //Tasser les occurrences de x à la fin de T
    // i = 0;
    // int j = n-1;

    // while (i != j)
    // {
    //     if (x == T[i])
    //     {
    //         T[i] = T[j];
    //         T[j] = x;
    //         j -= 1;
    //     }else
    //         i += 1;
    // }

    // //affichage du tableau T tasser sur x
    // printf("voila le tableau tasser :\n");
    // for ( i = 0; i < n-1; i++)
    // {
    //     printf("%d  \n", T[i]);
    // }
    
    // //ranger tous les elements de T l'ordre inverse 
    // int temp;
    // i=0;
    // j=n-1;

    // while (i<j)
    // {
    //     temp = T[i];
    //     T[i] = T[j];
    //     T[j] = temp;
    //     j -= 1;
    //     i += 1;
    // }

    // //affichage de l'inverse du tableau 
    // printf("voila le tableau inverser: \n");
    // for ( i = 0; i < n-1; i++)
    // {
    //     printf("%d  ", T[i]);
    // }


    

    //impairs suivis des nombres pairs
    

    // for (i=0; i<n; i++)
    // {
    //     if(i >= j)
    //         break;
    //     if(T[i]%2==0 && T[j]%2!=0){
    //         y = T[i];
    //         T[i] = T[j];
    //         T[j] = y;
    //         j--;
    //         i = -1;
    //     }else if(T[j]%2==0){
    //         j--;
    //         i = -1;
    //     }

    // }


    int y;
    j=n-1;
    i = 0;

//12 5 7 18 11 16


    while(i < j){
        //if T[i] is even and T[j] is odd --> swap
        
        if(T[i]%2==0 && T[j]%2!=0){
            //swap T[i] with T[j]
            y = T[i];
            T[i] = T[j];
            T[j] = y;
            //decrement even index
            j--;
        }else if(T[j]%2==0){
            //decrement even index 
            j--;
        }
        
        else 
            //increment the odd index
            i++;
    }
        

    
    
    //affichage 
    printf("voila le tableau :\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d  ", T[i]);
    }
    
    
    return 0;
}